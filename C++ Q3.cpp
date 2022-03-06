#include<iostream>
using namespace std;

class Deposit
{
public:
int amount;
Deposit()
{
amount = 50;
}
Deposit(int a){
amount = 50 + a;
}

void display()
{
cout<<amount;
}
};
int main()
{
Deposit D1;
int amt;
cout<<"\nEnter amount to deposit ";
cin>>amt;
cout<<"\nlnitial Amount in the Bank Rs."<<D1.amount ;
Deposit D2(amt);
cout<<"\nAmount in the Bank after deposit the amount is Rs." <<D2.amount;

}
