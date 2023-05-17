#include "Provider.h"
#include <fstream>
#include <iostream>
using namespace std;
A_Factory_List* Provider::Get_Factory_List() {
	fstream fin("Access.txt");
	int access;
	fin >> access;
	if (access == 1) {
		return new Inheritance_Factory;
	}
	else {
		return new Template_Factory;
	}
	fin.close();
}