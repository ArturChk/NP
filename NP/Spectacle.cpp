#include "Spectacle.h"
Spectacle::Spectacle(string name,string genre,int duration, int price, string theatre, int capacity)
	:Perfomance(name,genre,duration, price), theatre(theatre), capacity(capacity)
{}
void Spectacle::Print_Info()const {
	cout << name << " | " << theatre << " | " <<capacity << " | " << genre << " | " << duration << " | " << price << " | " << endl;
}
string Spectacle::Get_Theatre()const {
	return theatre;
}
int Spectacle::Get_Capacity()const {
	return capacity;
}