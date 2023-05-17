#pragma once
#include "Concert.h"
#include "Perfomance_List.h"
#include "Concert_A_List.h"
class Concert_list :public Perfomance_list,public Concert_A_List{
public:
	Concert_list();
	~Concert_list();
	void Add(Concert&concert);
	void Delete(int index);
	void Print_Info()const;
	void Show_Most_Exspensive_Concert()const;
	void Show_Most_Cheapest_Concert()const;
	void Show_Longest_Concert()const;
	void Show_Shortest_Concert()const;
	int Get_N()const;
};