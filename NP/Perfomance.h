#pragma once
#include <iostream>
#include <string>
using namespace std;

class Perfomance {
protected:
    string name;
    string genre;
    int duration;
    int price;
public:
    Perfomance(string name="",string genre="", int duration = 0, int price = 0);
    virtual void Print_Info()const;
    string Get_Name()const;
    string Get_Genre()const;
    int Get_Duration()const;
    int Get_Price()const;
};