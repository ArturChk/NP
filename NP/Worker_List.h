#pragma once
#include "Worker.h"
#include "Person_List.h"
#include "Worker_A_List.h"
class Worker_list:public Person_list,public Worker_A_List {
public:
    Worker_list();
    ~Worker_list();
    void Add(Worker& worker);
    void Delete(int index);
    void Print_Info()const;
    //void Show_Largest_Salary()const;
    //void Show_Lowest_Salary()const;
    void Show_Oldest_Age_Worker()const;
    void Show_Youngest_Age_Worker()const;
    void Show_Operation(string operation,int index1,int index2)const;
};