#include <iostream>
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        std::cout << Name << std::endl;
        std::cout << Company << std::endl;
        std::cout << Age << std::endl;
    }
};

int main()
{
    Employee employee1;

    employee1.Name = "Jack";
    employee1.Company = "Microsoft";
    employee1.Age = 32;

    employee1.IntroduceYourself();

    return 0;
}

// There are three type of access modifers in cpp
// public : you will be able to access that outside of your class.
// private : it's not going to accesible outside of your class.
// protected : We'll talk aboun in Inheritance Section.