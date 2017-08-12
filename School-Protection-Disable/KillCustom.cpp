#include <iostream>

#include "KillCore.cpp"

using namespace std;

class KillCustom {
public:
	KillCustom(void) {}

	void run(void) {
		Gn();
		Pa();
		V3();
		Nc();
	}

private:
	KillCore kill = KillCore();

	void Gn(void) {
		const string config1 = "GnPCInspectorSvc";
		const string config2 = "GnStart";

		kill.log("Gn");
		kill.run("GnPlugin", config1, config2);
		kill.run("GnAgent", config1, config2);
		kill.run("GnPCInspector", config1, config2);
		kill.run("GnPCInspectorSvc", config1, config2);
		kill.run("GnStart", config1, config2);
	}

	void Pa(void) {
		kill.log("Pa");
		kill.run("PaSvc");
		kill.run("PaTray");
	}

	void V3(void) {
		const string config1 = "V3Svc";

		kill.log("V3");
		kill.run("V3UI", config1);
	}

	void Nc(void) {
		const string config1 = "NetControl2Server";

		kill.log("Nc");
		kill.run("ncserver", config1);
		kill.run("usergui", config1);
	}
};
