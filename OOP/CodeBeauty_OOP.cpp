#include <iostream>
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout << "Name -" << Name << std::endl;
        std::cout << "Company -" << Company << std::endl;
        std::cout << "Age -" << Age << std::endl;
    }


};

int main()
{
    Employee employee1;
    employee1.Name = "Pony";
    employee1.Company = "Dolphin";
    employee1.Age = 16;
    employee1.IntroduceYourself();

    Employee employee2;
    employee1.Name = "Le Petit Prince";
    employee1.Company = "Earth";
    employee1.Age = 12;
    employee1.IntroduceYourself();


}