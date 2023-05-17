#pragma once
#include "Viewer.h"

class Viewer_File {
public:
    static void Read_From_File(Viewer**& viewers, int& n);
    static void Write_to_File(Viewer** viewers, int n);
    static void Read_From_File(Viewer*& viewers, int& n);
    static void Write_to_File(Viewer* viewers, int n);
};