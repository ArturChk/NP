#pragma once
#include "Spectacle.h"

class Spectacle_File {
public:
	static void Read_From_File(Spectacle**& spectacles, int& n);
	static void Write_to_File(Spectacle** spectacles, int n);
	static void Read_From_File(Spectacle*& spectacles, int& n);
	static void Write_to_File(Spectacle* spectacles, int n);
};