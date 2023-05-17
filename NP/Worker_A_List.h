#pragma once
#include "Worker.h"
#include "A_List.h"
class Worker_A_List : public A_List<Worker> {
public:
	virtual void Show_Oldest_Age_Worker()const = 0;
	virtual void Show_Youngest_Age_Worker()const = 0;
};