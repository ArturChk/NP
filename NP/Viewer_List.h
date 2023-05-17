#pragma once
#include "Viewer.h"
#include "Person_List.h"
#include "Viewer_A_List.h"
class Viewer_list:public Person_list,public Viewer_A_List {
public:
    Viewer_list();
    ~Viewer_list();
    void Add(Viewer& viewer);
    void Print_Info()const;
    void Delete(int index);
    void Show_Oldest_Age_Viewer()const;
    void Show_Youngest_Age_Viewer()const;
};