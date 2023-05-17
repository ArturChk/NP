#include "Worker.h"
Worker::Worker(string name , string surname,string position, int age,int salary)
    :Person(name,surname,age),position(position),salary(salary)
{}
void Worker::Print_Info()const {
    cout << name << " | " << surname << " | " << age << " | " << position << " | " << salary << endl;
}
string Worker::Get_Position()const {
    return position;
}
int Worker::Get_Salary()const{
    return salary;
}

ostream& operator<<(ostream &out, Worker& worker) {
    out << worker.name << " | " << worker.surname << " | " << worker.age 
        << " | " << worker.position << " | " << worker.salary << endl;
    return out;
}
istream& operator>>(istream& in, Worker& worker) {
    cout << "Name: ";
    in >> worker.name;
    cout << "Surname: ";
    in >> worker.surname;
    cout << "Position: ";
    in >> worker.position;
    cout << "Age: ";
    in >> worker.age;
    cout << "Salary: ";
    in >> worker.salary;
    return in;
}
Worker Worker::operator=(Worker worker) {
    name = worker.name;
    surname = worker.surname;
    age = worker.age;
    salary = worker.salary;
    position = worker.position;
    return *this;
}
Worker Worker::operator+=(Worker worker) {
    position = worker.position;
    salary += worker.salary;
    return *this;
}