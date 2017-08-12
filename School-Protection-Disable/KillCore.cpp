#include <iostream>

using namespace std;

class KillCore {
public:
	KillCore(void) {}

	void log(const string message) {
		printf(("\n\nkilling... " + message + "\n").c_str());
	}

	void run(const string task) {
		setTask(task);
	}

	void run(const string task, const string config) {
		run(task);

		setConfig(config);
	}

	void run(const string task, const string config1, const string config2) {
		run(task, config1);

		setStop(config2.c_str());
	}

private:
	string command;

	void logInfo(const string message) {
		printf((message + "\n").c_str());
	}

	void setTask(const string source) {
		command = "taskkill /f /im " + source + ".exe";

		logInfo(command);
		system(command.c_str());
	}

	void setConfig(const string source) {
		command = "sc config " + source + " start=disabled";

		logInfo(command);
		system(command.c_str());
	}

	void setStop(const string source) {
		command = "sc stop " + source + " 1:1:1 Unuseful";

		logInfo(command);
		system(command.c_str());
	}
};
