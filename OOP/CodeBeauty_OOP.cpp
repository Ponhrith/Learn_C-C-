#include <iostream>
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;

};

int main()
{
    Employee employee1;
    employee1.Name = "Pony";
    employee1.Company = "Dolphin";
    employee1.Age = 16;

}