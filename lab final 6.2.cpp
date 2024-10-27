//Ambiguity of multiple inheritance

#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    void display()
    {
        cout<<"Display from class A"<<endl;
    }
};
class B
{
public:
    void display()
    {
        cout<<"Display from class B"<<endl;
    }
};
class C: public A, public B
{
public:
    void view()
    {
        A::display();
        B::display();
    }

};
int main()
{
    C obj;
    obj.view();

    return 0;
}
