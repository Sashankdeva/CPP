#include<iostream>
using namespace std;
class Student{
	private :
	string rollno;
	float marks;
	public :
		string name;
		string branch;
		Student(string r, float m,string n,string b){
			rollno=r;
			marks=m;
			name=n;
			branch =b;
		} 
	void setmarks(float m){
		marks =m;
	}
	float getmarks(){
		return marks;
	}
  void displayDetails() const {
        cout << "Name     : " << name << endl;
        cout << "Branch   : " << branch << endl;
        cout << "Roll No. : " << rollno << endl;
        cout << "Marks    : " << marks << endl;
    }
};

int main() {
    Student s1("24B11AI085", 89.5, "Sashank", "AI&ML");
    cout << "Initial Student Details:\n";
    s1.displayDetails();
    s1.setmarks(92.0);
    cout << "\nUpdated Student Details:\n";
    s1.displayDetails();

    return 0;
}

