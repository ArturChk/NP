#pragma once
#include "Worker.h"
class Worker_File {
public:
    static void Read_From_File(Worker**& workers, int& n);
    static void Write_to_File(Worker** workers, int n);
    static void Read_From_File(Worker*& workers, int& n);
    static void Write_to_File(Worker* workers, int n);
};