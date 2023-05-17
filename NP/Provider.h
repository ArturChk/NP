#pragma once
#include "A_Factory_List.h"
#include "Inheritance_Factory.h"
#include "Template_Factory.h"
class Provider {
public:
	A_Factory_List* Get_Factory_List();
};