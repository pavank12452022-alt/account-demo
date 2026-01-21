
#include<iostream>
#include "util.h"
#include<vector>
using namespace std;
void display( vector<account> &s)
{
        cout<<"=====================display===================="<<endl;
        for( auto &c:s)
                cout<<c<<endl;
}
void deposit(vector<account>&s,double amt)
{
        cout<<"===================deposit===================="<<endl;
        for(auto  &c:s){
                 if(c.deposit(amt))
                                 {cout<<"amount "<<amt<<" deposited to "<<c<<endl;
                                 }
                 else
                 cout<<"amount "<<amt<<" not deposited to "<<c<<endl;

                 }
}

void withdraw(vector<account> &s,double amt)
{
cout<<"======================withdraw==================="<<endl;
for(auto &c:s){
if(c.withdraw(amt))
                {cout<<"amount "<<amt<<" withdrawn form "<<c<<endl;
                }
  else
  {
  cout<<"amount "<<amt<<" was unable to withdraw from   "<<c<<endl;
  }
  }
  }
void display( vector<savings> &s)
{
        cout<<"=====================display===================="<<endl;
        for( auto &c:s)
            cout<<c<<endl;
}
void deposit(vector<savings>&s,double amt)
{
        cout<<"===================deposit===================="<<endl;
        for(auto &c:s){
                 if(c.deposit(amt))
                         {
                            cout<<"amount "<<amt<<" deposited to "<<c<<endl;
                        }
                 else
                 cout<<"amount "<<amt<<" not deposited to "<<c<<endl;

        }
}
void withdraw(vector<savings> &s,double amt)                                                                  {
cout<<"======================withdraw==================="<<endl;
for(auto &c:s){
if(c.withdraw(amt))
                {cout<<"amount "<<amt<<" withdrawn form "<<c<<endl;
                }
  else
  {
  cout<<"amount "<<amt<<" was unable to withdraw from  "<<c<<endl;
  }
  }
  }