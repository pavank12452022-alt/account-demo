#ifndef _savings_h_
#define _savings_h_
#include<iostream>
#include<string>
#include"account.h"
using namespace std;
class savings:public account
{
        private:
                friend ostream &operator<<(ostream &os,savings &s);
        protected:
                double rate;
        public:
                savings(string na,double bal,double in);
                bool deposit(double amt);
                string getname()const{return name;};
                double getbal()const{return balance;};
                double getrate()const{return rate;};
                
};
#endif
