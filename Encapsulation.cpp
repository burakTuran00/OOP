#include <iostream>
using std::string;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) // setter
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company) // getter
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

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
    // employee1.Name = "Jack";
    // employee1.Company = "Microsoft";
    // employee1.Age = 32;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon", 45);
    employee2.IntroduceYourself();

    employee1.setAge(39);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;

    return 0;
}