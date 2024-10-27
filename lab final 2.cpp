#include<iostream>
using namespace std;

class Fibonacci
{
private:
    int num;
public:
    Fibonacci(int n)
    {
        num = n;
    }
    void printFibonacciSeries()
    {
       int first = 0, second = 1, next;
       cout<<"Fibonacci Series: ";

       for(int i =0; i<num; i++)
       {
           if(i<=1)
            next = i;
           else
           {
               next = first + second;
               first = second;
               second = next;
           }
           cout<<next<<" ";

       }
       cout<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    Fibonacci fib(n);
    fib.printFibonacciSeries();

    return 0;
}
