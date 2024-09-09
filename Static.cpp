#include <iostream>

static int s_Variable = 10;

void externalPrint() {
	std::cout << s_Variable << std::endl;
}
