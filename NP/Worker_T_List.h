#pragma once
#include "Worker.h"
#include "T_List.h"
#include "Worker_A_List.h"
class Worker_T_list :private T_list<Worker>,public Worker_A_List {
public:
    Worker_T_list();
    ~Worker_T_list();
    void Add(Worker& item);
    void Delete(int index);
    void Print_Info()const;
    void Show_Oldest_Age_Worker()const;
    void Show_Youngest_Age_Worker()const;
};