#include<bits/stdc++.h>
using namespace std;

class Apple
{
public:
    void show()
    {
        cout<<"Show the function from class Apple"<<endl;
    }
};
class Banana
{
public:
    void show()
    {
        cout<<"Show the function from class Banana"<<endl;
    }
};

class fruits: public Apple, public Banana
{

public:
    void show()
    {
        Apple::show();
        Banana::show();
    }
};

int main()
{
    fruits obj;
    obj.show();

    return 0;
}
