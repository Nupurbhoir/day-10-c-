#include<iostream>
using namespace std;
class simple {
    public:
    int id;
    simple() {}
    simple(int x){id = x;}
    simple(simple& t){id = t.id;}
    void display(){ cout<< "ID="<<id;}
};
int main()
{
    simple obj1(10);
    obj1.display();
    cout<< endl;
    simple obj2(obj1);
    obj2.display();
    return 0;
}