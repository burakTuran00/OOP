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
    virtual void Work()
    {
        std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
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
    void Work()
    {
        std::cout << Name << " is writing " << FavProgramingLanguage << " code." << std::endl;
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
    void Work()
    {
        std::cout << Name << " is teaching " << Subject << " ." << std::endl;
    }
};

int main()
{
    Developer d = Developer("Jack", "Youtube", 25, "C++");
    Teacher t = Teacher("John", "Amazon", 47, "History");

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    d.Work();

    // if you using pointer, you use the this symbol insted of dot.

    return 0;
}

// The most common use of polymorphism is when a parent class
// reference is used to refer to a child class object.