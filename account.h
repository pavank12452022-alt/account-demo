#ifndef _account_h_
#define _account_h_
#include<iostream>
#include<string>
using namespace std;
class account
{      friend ostream &operator<<(ostream &os,account &s);
        private:
        protected:
                string name;
                double balance;

        public:
                account(string na="undefined",double bal=0.0);
                bool deposit(double amt);
                bool withdraw(double amt);
                double getbal()const{return balance;};
                string getname()const{return name;};
};
#endif