#include<iostream>
using namespace std;
class Employee
{
    int salary, emp_id;
    public :
        string name,dept;
    Employee(int e,string n,string d) {
        emp_id=e;
        name=n;
        dept=d;
    }
    void setsal(int x) {
        salary=x;
    }
    void getsal() {
        cout<<"Salary is : "<< salary<<endl;
    }
    void display() {
        cout<<"Employee Details\n" << "Name : " << name << endl << "Employee ID : " << emp_id << endl << "Department : " << dept << endl;
    }
};

int main() {
    Employee e1(1,"Sashank","AIML");
    e1.setsal(600000);
    e1.getsal();
    e1.display();
}
