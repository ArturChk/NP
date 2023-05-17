#pragma once
#include "Spectacle.h"
#include "Spectacle_A_List.h"
#include "Perfomance_List.h"
class Spectacle_list:public Perfomance_list,public Spectacle_A_List {
public:
	Spectacle_list();
	~Spectacle_list();
	void Add(Spectacle& spectacle);
	void Delete(int index);
	void Print_Info()const;
	void Show_Most_Exspensive_Spectacle()const;
	void Show_Most_Cheapest_Spectacle()const;
	void Show_Longest_Spectacle()const;
	void Show_Shortest_Spectacle()const;

};