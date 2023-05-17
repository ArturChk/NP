#pragma once
#include "Concert_A_List.h"
#include "Spectacle_A_List.h"
#include "Viewer_A_List.h"
#include "Worker_A_List.h"
class A_Factory_List {
public:
	virtual Concert_A_List* Get_Concert_List() = 0;
	virtual Spectacle_A_List* Get_Spectacle_List() = 0;
	virtual Viewer_A_List* Get_Viewer_List() = 0;
	virtual Worker_A_List* Get_Worker_List() = 0;
};
