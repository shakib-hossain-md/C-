/*Write a program using a class that holds the
account holders Name,Gmail,Balance and Mobile number.
Finally print the information of 5 account holders
that receive those values from the main function.*/

#include<bits/stdc++.h>
using namespace std;

class AccountHolder
{
private:
    int id;
    string name;
    string gmail;
    double balance;
    string mobileNumber;

public:
    void set_details(int ID,string Name,string Gmail,double Balance,string mobileNUmber)
    {
        id=ID;
        name=Name;
        gmail=Gmail;
        balance=Balance;
        mobileNumber=mobileNUmber;
    }


    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gmail: "<<gmail<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Mobile Number: "<<mobileNumber<<endl;
        cout<<"-------------------------"<<endl;
        cout<<endl;
    }
};

int main()
{
    AccountHolder sakib;

    sakib.set_details(101,"Sakib Hossain","sakib123@gmail.com",250000,"017016....");
    sakib.display();

    AccountHolder rakib;
    rakib.set_details(102,"Rakib Hossain","rakib123@gmail.com",200000,"015016....");
    rakib.display();

    AccountHolder durjoy;
    durjoy.set_details(103,"Durjoy Bormon","durjoy123@gmail.com",350000,"016016....");
    durjoy.display();

    AccountHolder ayman;
    ayman.set_details(104,"Ayman Sajid","sajid123@gmail.com",290000,"01701....");
    ayman.display();

    AccountHolder mahamudul;
    mahamudul.set_details(105,"Mahamudul Hasan","mahamud123@gmail.com",390000,"01301....");
    mahamudul.display();


    return 0;

}
