#include <iostream>
#include <stdio.h>

#include "KillCustom.cpp"

using namespace std;

void printCopyRight(void);

KillCustom kill = KillCustom();

void main(void) {
	printCopyRight();

	kill.run();
}

void printCopyRight(void) {
	printf(
		"Copyright (c) 2017, Lee Sung Jae All rights reserved.\n"
		"\n"
		"School Protection Disable\n"
		"Date : 2017-08-12\n"
		"Version : 001\n"
		"\n"
		"This will close detected any School PC Protection.\n"
		"Your PC may be down, or your Performance score may be cut off.\n"
		"\n"
		"If you agree, press any key please.\n"
	);

	std::cin.get();

	printf("Initializing...\n");
}
