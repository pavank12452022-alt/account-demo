#include "saving_account.h"
#include<iostream>
using namespace std;
ostream &operator<<(ostream  &os,savings &s)
{

        os<<" name: "<<s.name<<" intrest: "<<s.rate<<" balance : "<<s.balance;
        return os;
}
savings::savings(string na,double bal,double in)
:account(na,bal),rate{in}
{} 
bool savings::deposit(double amt)
{
        amt+=amt*(rate/100);
        return (account::deposit(amt));
}
// bool savings::withdraw(double amt)
//                 {       
//                         return(account::withdraw(amt));
//                 }
