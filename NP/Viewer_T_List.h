#pragma once
#include "Viewer.h"
#include "T_List.h"
#include "Viewer_A_List.h"
class Viewer_T_list :public T_list<Viewer>,public Viewer_A_List {
public:
    Viewer_T_list();
    ~Viewer_T_list();
    void Add(Viewer& item);
    void Delete(int index);
    void Print_Info()const;
    void Show_Oldest_Age_Viewer()const;
    void Show_Youngest_Age_Viewer()const;
};