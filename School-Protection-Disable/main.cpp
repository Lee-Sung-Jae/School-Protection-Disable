//Include files
#include <iostream>
#include <stdio.h>

//Define functions
int killGn(void);
int killNc(void);
int killPa(void);
int killV3(void);

//Program main
int main(void) {
	int runCount = 0;
	int runLimit = 25;

	printf("Copyright (c) 2017, Lee Sung Jae All rights reserved.\n");
	printf("School Protection Disable\n");
	printf("Version : 20170811-001\n");
	printf("\n");
	printf("This will close detected any School PC Protection.\n");
	printf("Your PC may be down, or your Performance score may be cut off.\n");
	printf("If you agree, press any key please.\n");
	std::cin.get();
	printf("Initializing...\n");
	printf("\n");
	_sleep(3210);

	while (runCount < runLimit) {
		killGn();
		killNc();
		killPa();
		killV3();
		runCount++;
	}

	return 0;
}

int killGn(void) {
	system("taskkill /f /im GnPlugin.exe");
	system("sc config GnPCInspectorSvc start=disabled");
	system("sc stop GnPCInspectorSvc 1:1:1 Unuseful");
	system("sc config GnStart start=disabled");
	system("sc stop GnStart 1:1:1 Unuseful");

	system("taskkill /f /im GnAgent.exe");
	system("sc config GnPCInspectorSvc start=disabled");
	system("sc stop GnPCInspectorSvc 1:1:1 Unuseful");
	system("sc config GnStart start=disabled");
	system("sc stop GnStart 1:1:1 Unuseful");

	system("taskkill /f /im GnPCInspector.exe");
	system("sc config GnPCInspectorSvc start=disabled");
	system("sc stop GnPCInspectorSvc 1:1:1 Unuseful");
	system("sc config GnStart start=disabled");
	system("sc stop GnStart 1:1:1 Unuseful");

	system("taskkill /f /im GnPCInspectorSvc.exe");
	system("sc config GnPCInspectorSvc start=disabled");
	system("sc stop GnPCInspectorSvc 1:1:1 Unuseful");
	system("sc config GnStart start=disabled");
	system("sc stop GnStart 1:1:1 Unuseful");

	system("taskkill /f /im GnStart.exe");
	system("sc config GnPCInspectorSvc start=disabled");
	system("sc stop GnPCInspectorSvc 1:1:1 Unuseful");
	system("sc config GnStart start=disabled");
	system("sc stop GnStart 1:1:1 Unuseful");

	return 0;
}

int killPa(void) {
	system("taskkill /f /im PaSvc.exe");
	system("taskkill /f /im PaTray.exe");

	return 0;
}

int killV3(void) {
	system("taskkill /f /im V3UI.exe");
	system("sc config V3Svc start=disabled");
	system("sc stop V3Svc 1:1:1 Unuseful");

	return 0;
}

int killNc(void) {
	system("taskkill /f /im ncserver.exe");
	system("sc config NetControl2Server start=disabled");
	system("sc stop NetControl2Server 1:1:1 Unuseful");

	system("taskkill /f /im usergui.exe");
	system("sc config NetControl2Server start=disabled");
	system("sc stop NetControl2Server 1:1:1 Unuseful");

	return 0;
}