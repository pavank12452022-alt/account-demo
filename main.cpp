#include<iostream>
#include<vector>
#include<string>
#include"account.h"
#include"saving_account.h"
#include"util.h"
using namespace std;
int main()
{
        vector<account> s;
        // s.push_back(account{"pavan",2000});
        // s.push_back(account{"arjun",5000});
        // s.push_back(account{"mahin",10000});
        // display(s);
        // deposit(s,10000);
        // withdraw(s,5000);
        vector<savings>d;
        // d.push_back(savings{"manohar",200000,0.5});
        // d.push_back(savings{"shalvin",100000,0.5});
        // d.push_back(savings{"vinuth",100000,0.5});
        // display(d);
        // deposit(d,100000);
        // withdraw(d,5000);
        int item1,item2,item3;
       
       
        while(true)
        {
        cout<<"1.account 2.saving account 3 to exit"<<endl;
        cin>>item1;
        switch(item1)
        {
            case 1:{
                 bool flag1=true;
                while(flag1)
                {
                cout<<"enter 0 to create 1 to display 2 to deposit 3 to withdraw 4 to exit 5 to find"<<endl;
                cin>>item2;
                switch(item2)
                {
                    case 0:
                    {
                        string name;
                        double balance;
                        cout<<"enter the name and balance"<<endl;
                        cin>>name>>balance;
                        s.push_back(account{name,balance});
                        break;
                    }
                    case 1:
                    {
                    display(s);
                     break;  }
                     case 2:
                     {
                        double amount;
                        cout<<"enter the amount"<<endl;
                        cin>>amount;
                        deposit(s,amount);
                        break;
                        }                   
                      case 3:
                      {
                        double amount;
                        cout<<"enter the amount"<<endl;
                        cin>>amount;
                        withdraw(s,amount);
                        break;
                      }
                      case 4:
                      {
                        flag1=false;
                        break;

                      }
                      case 5:{
                        string name;
                        bool flag=false;
                        cout<<"enter the name to find "<<endl;
                        cin>>name;
                         for(auto &c:s){
                            if(c.getname()==name){
                                cout<<" account found and balance :is"<<c.getbal()<<endl;
                                flag=true;
                            
                            } 
                            
                        }
                        if(flag==false){
                            cout<<"not found"<<endl;
                        }
                        break;
                      }
                    default:
                    {
                        cout<<"invalid option"<<endl;
                        break;
                    }
               }
             } 
          break;
        }
        case 2:
        {   bool flag2=true;
            while(flag2)
            {
                cout<<"enter 1 to create 2 to display 3 to deposit 4 to withdraw 5 to exit"<<endl;
                cin>>item3;
                switch(item3)
                {
                    case 1:
                    {
                        string name;
                        double balance;
                        double rate;
                        cout<<"enter the name balance and rate"<<endl;
                        cin>> name>>balance>>rate;
                        d.push_back(savings{name,balance,rate});
                        break;
                    }
                    case 2:
                    {
                        display(d);
                        break;
                    }
                    case 3:
                    {
                        double amount;
                        cout<<"enter the amount"<<endl;
                        cin>>amount;
                        deposit(d,amount);
                        break;
                    }
                    case 4:
                    {
                        double amount;
                        cout<<"enter the amount"<<endl;
                        cin>>amount;
                        withdraw(d,amount);
                        break;
                    }
                    case 5:
                    {
                        flag2=false;
                        break;
                       
                    }
                    default:
                    {
                        cout<<"invalid option"<<endl;
                        break;
                    }
                }
            }
            break;
        }
        case 3:
        {
            cout<<"thank you"<<endl;
            exit(0);
        }
        default:
        {
            cout<<"invalid"<<endl;
            break;
        }
    }
        
    }
    return 0;   
}