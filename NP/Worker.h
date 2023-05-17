#pragma once
#include "Person.h"
class Worker :public Person {
protected:
    string position;
    int salary;
public:
    Worker(string name = "", string surname = "", string position = "",int age = 0, int salary = 0);
    void Print_Info()const;
    string Get_Position()const;
    int Get_Salary()const;
    friend ostream& operator <<(ostream& out,Worker& worker);
    friend istream& operator >>(istream& in,Worker& worker);
    Worker operator=(Worker worker);
    Worker operator+=(Worker worker);
};