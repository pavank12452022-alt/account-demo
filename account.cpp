#include"account.h"
#include<iostream>
#include<string>
using namespace std;
ostream &operator<<(ostream &os,account &s)
{
        os<<"name: "<<s.name<<" balance: "<<s.balance;
        return os;
}
bool account ::deposit(double amt)
{
        if(amt<0)
                return false;
        else
        {balance +=amt;
                return true;
        }
}
account::account(string na,double bal)
:name{na},balance{bal}{}
bool account::withdraw(double amt)
         {
                 if(balance<amt)
                         return false;
                 else{
                         balance-=amt;
                         return true;
                      }
          }
