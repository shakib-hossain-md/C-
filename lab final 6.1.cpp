//Multiple Inheritance

#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout<<"Display from class A"<<endl;
    }
};

class B
{
public:
    void displayB()
    {
        cout<<"Display from class B"<<endl;
    }
};
class C : public A, public B
{
public:
    void displayC()
    {
        cout<<"Display from class C"<<endl;
    }

    void show()
    {
        displayC();
        displayA();
        displayB();
    }

};

int main()
{
    C obj;
    obj.show();

    return 0;
}
