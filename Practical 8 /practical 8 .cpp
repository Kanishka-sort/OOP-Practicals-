#include <iostream>
using namespace std;

class BasicInfo
{
    public:
        int id;
        string name;

        void getBasicInfo()
        {
            cout << "Enter Employee ID: ";
            cin >> id;

            cout << "Enter Employee Name: ";
            cin >> name;
        }
};

class DepartmentInfo
{
    public:
        string department;
        string designation;

        void getDepartmentInfo()
        {
            cout << "Enter Department: ";
            cin >> department;

            cout << "Enter Designation: ";
            cin >> designation;
        }
};

class Employee : public BasicInfo, public DepartmentInfo
{
    public:
        float salary;

        void getData()
        {
            getBasicInfo();
            getDepartmentInfo();

            cout << "Enter Salary: ";
            cin >> salary;
        }

        void display()
        {
            cout << "\n--- Employee Information ---\n";
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Designation: " << designation << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    Employee e;

    e.getData();
    e.display();

    return 0;
}
