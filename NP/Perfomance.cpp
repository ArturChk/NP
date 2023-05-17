#include "Perfomance.h"
Perfomance::Perfomance(string name,string genre, int duration, int price )
    :name(name),genre(genre),duration(duration),price(price)
{}
void Perfomance::Print_Info()const {
    cout <<genre << " | " << duration << " | " << price << endl;
}
string Perfomance::Get_Name()const {
    return name;
}
string Perfomance::Get_Genre()const {
    return genre;
}
int Perfomance::Get_Duration()const {
    return duration;
}
int Perfomance::Get_Price()const {
    return price;
}