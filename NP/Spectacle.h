#pragma once
#include "Perfomance.h"
class Spectacle :public Perfomance{
protected:
    string theatre;
    int capacity;
public:
    Spectacle(string name="",string genre = "", int duration = 0, int price = 0, string theatre = "", int capacity = 0);
    void Print_Info()const;
    string Get_Theatre()const;
    int Get_Capacity()const;
};