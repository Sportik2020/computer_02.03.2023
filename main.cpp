#include <iostream>
#include "class.h"
#include <vector>
using namespace std;
int main() {
	string Processor[] = { "Celeron", "Amd", "IntelCor" };
	string Nvidia[] = { "2060", "3070","1660" };
	vector<Computer>comp;
	for (int i = 0; i <= 10; i++) {
		int index_Processor = rand() % 3;
		int index_Nvidia = rand() % 3;
		Computer qwe(Processor[index_Processor], Nvidia[index_Nvidia]);
		comp.push_back(qwe);
	}
	for (int i = 0; i <= 10; i++) {
		comp[i].print();
	}

	return 0;
}