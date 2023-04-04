#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Company;
    int Age;

protected:
    string Name;

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

class Developer : public Employee // Developer Class became a child class.
{
public:
    string FavProgramingLanguage;
    Developer(string name, string company, int age, string favProgramingLanguage)
        : Employee(name, company, age)
    {
        FavProgramingLanguage = favProgramingLanguage;
    }
    void FixBug()
    {
        std::cout << getName() << " fixed bug using " << FavProgramingLanguage << std::endl;
        std::cout << Name << " fixed bug using " << FavProgramingLanguage << std::endl;
        // std::cout << getAge() << std::endl;
        // We made made protected Name,Then we can use the with its name.
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson." << std::endl;
    }
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{
    Developer d = Developer("Jack", "Youtube", 25, "C++");

    d.FixBug();
    d.AskForPromotion();
    // We did add the public line 72 next to the Employee.The we can use the Employee clas within Developer class.

    Teacher t = Teacher("John", "Amazon", 47, "History");

    t.PrepareLesson();
    t.AskForPromotion();

    return 0;
}

// protected: that will make available child class.
// If you use inheritance some class each others. You need to access the variable.you must use the protected.