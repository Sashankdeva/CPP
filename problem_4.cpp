#include <iostream>
 using namespace std;

class book {
     int isbn,ca;
    public :
         string title,author;
    book(string t,string a, int is, int c) {
         title=t;
         author=a;
         isbn=is;
         ca=c;
    }
	     void issuebook() {
         ca--;
         cout << "Issued Book\n";
         cout << "Title : " << title << endl << "Author : " << author << endl << "Book Number : " << isbn << endl << "Copies left : " << ca << endl;
     }
     void addcp(int n) {
         ca+=n;
         cout << "Added - " << n << " Copies\n";
     }
     void details() {
         cout << "Title : " << title << endl << "Author : " << author << endl << "Book Number : " << isbn << endl << "Copies left : " << ca << endl;
     }
 };
 int main() {
     book b("Naruto","kishimoto",85,300);
     b.issuebook();
     b.addcp(1);
     b.details();
}
