#pragma once
#include "Perfomance.h"
class Perfomance_list {
protected:
	Perfomance** perfomances;
	int n;
	void Add(Perfomance* perfomance);
public:
	Perfomance_list();
	~Perfomance_list();
	void Print_Info()const;
	int Get_N()const;
};