#pragma once
#include "Perfomance.h"

class Concert : public Perfomance {
private:
	string group_name;
	int group_capacity;
public:
	Concert (string name="",string genre = "", int duration = 0, int price = 0, string group_name = "", int group_capacity = 0);
	void Print_Info()const;
	string Get_Group_Name()const;
	int Get_Group_Capacity()const;
};