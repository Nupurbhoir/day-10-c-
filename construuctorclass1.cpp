#include<iostream>
using namespace std ;
class student 
{
    public:
    int rno;
    char name[50];
    double fee;
    student();
    void display();
};
student::student()
{
    cout << "enter the roll no:";
    cin >> rno;
    cout << "enter the name:";
    cin >> name;
    cout << " enter the fee:";
    cin >> fee;
}
void student :: display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}
int main ()
{
    student s;
    s.display();
    return 0;
}