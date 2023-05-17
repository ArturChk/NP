#include "Concert.h"
Concert::Concert(string name,string genre,int duration, int price, string group_name, int group_capacity)
	:Perfomance(name,genre,duration, price), group_name(group_name), group_capacity(group_capacity)
{}
void Concert::Print_Info()const {
	cout <<name<<" | " <<group_name << " | " << group_capacity << " | " << genre << " | " << duration << " | " << price << " | " << endl;
}
string Concert::Get_Group_Name()const {
	return group_name;
}
int Concert::Get_Group_Capacity()const {
	return group_capacity;
}