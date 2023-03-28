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
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Jack", "Microsoft", 32);

    employee1.Name = "Jack";
    employee1.Company = "Microsoft";
    employee1.Age = 32;

    employee1.IntroduceYourself();
    

    Employee employee2 = Employee("John", "Amazon", 45);

    employee2.IntroduceYourself();

    return 0;
}

// A constructor does not have a return type.
// A constructor must be the same name as the class.
// A constructor must be public.