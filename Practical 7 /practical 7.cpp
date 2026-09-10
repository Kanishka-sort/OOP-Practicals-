#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    int id;
    string name;
    float salary;
public:
    Employee()
    {
        id=0;
        name="";
        salary=0.0;
    }
    Employee(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
    Employee(const Employee &e)
    {
        id=e.id;
        name=e.name;
        salary=e.salary;
    }
    void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"ID = "<<id<<"\tName = "<<name<<"\tSalary = "<<salary;
    }
    ~Employee()
    {
        cout<<"\nDestructor called for: "<<name;
    }
};
int main()
{
    Employee e1;
    e1.accept();
    Employee e2(2,"Gargi",450000);
    Employee e3=e2;
    cout<<"\nEmployee 1: ";
    e1.display();
    cout<<"\nEmployee 2: ";
    e2.display();
    cout<<"\nEmployee 3: ";
    e3.display();
    return 0;
}
