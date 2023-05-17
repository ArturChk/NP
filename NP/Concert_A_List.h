#pragma once
#include "Concert.h"
#include "A_List.h"
class Concert_A_List :public A_List<Concert>{
public:
	virtual void Show_Most_Exspensive_Concert()const=0;
	virtual void Show_Most_Cheapest_Concert()const=0;
	virtual void Show_Longest_Concert()const=0;
	virtual void Show_Shortest_Concert()const=0;
};