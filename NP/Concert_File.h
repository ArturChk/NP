#pragma once
#include "Concert.h"

class Concert_File {
public:
	static void Read_From_File(Concert**& concerts, int& n);
	static void Write_to_File(Concert** concerts, int n);
	static void Read_From_File(Concert*& concerts, int& n);
	static void Write_to_File(Concert* concerts, int n);
};