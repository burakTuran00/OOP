#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
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

    void AskForPromotion()
    {
        if (Age > 30)
        {
            std::cout << Name << " got promoted!" << std::endl;
        }
        else
        {
            std::cout << Name << ", sorry No promotion for you!" << std::endl;
        }
    }
};

int main()
{
    Employee employee1 = Employee("Jack", "Microsoft", 32);
    Employee employee2 = Employee("John", "Amazon", 45);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}