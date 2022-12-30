#include<iostream>

using namespace std;

class bank

{

              private:

                           int accid;

                           string name;

                           float balance;

                           public:

                                         void openAccount()

                                         {

                                                       cout<<"Enter Account number:";

                                                       cin>>accid;

                                                       cin.ignore();

                                                       cout<<"Enter Name:";

                                                       getline(cin, name);

                                                       cout<<"Enter Balance:";

                                                       cin>>balance;

                                         }

                                         void showAccount()

                                         {

                                                       cout<<"Accoutn Number:"<<accid<<endl;

                                                       cout<<"Name:"<<name<<endl;

                                                       cout<<"Balance:"<<balance<<endl;

                                         }

                                         void deposit()

                                         {

                                                       int amt;

                                                       cout<<"Enter Amount u want to Deposit:";

                                                       cin>>amt;

                                                       balance=balance+amt;

                                         }

                                        

                                         void withdrawal()

                                         {

                                                       int amt;

                                                       cout<<"Enter Amount U Want To Withdrawal;";

                                                       cin>>amt;

                                                       if(balance>=amt)

                                                       {

                                                                    balance=balance-amt;

                                                       }

                                                       else

                                                       {

                                                                    cout<<"Insufficiant fund...";

                                                       }

                                         }

                                         int search(int);

};

int bank::search(int id)

{

              if(accid==id)

              {

                           return(1);

              }

              return(0);

}

int main()

{

              bank pnb[3];

              int i;

              for(i=0;i<=2;i++)

              {

                           pnb[i].openAccount();

              }

             

              int ch,found,id;

              do

              {

                           cout<<"main menu\n1]show all coustmer\2]search account \n3]deposit\n4]withdrawal\n5]exit\n";

                           cout<<"Enter your choice:";

                           cin>>ch;

                           switch(ch)

                           {

                                         case 1:

                                                       for(i=0;i<=2;i++)

                                                       {

                                                                    pnb[i].showAccount();

                                                       }

                                                       break;

                                                       case 2:

                                                                    cout<<"enter account number u want to search:";

                                                           cin>>id;

                                                                    for(i=0;i<=2;i++)

                                                                    {

                                                                                  found=pnb[i].search(id);

                                                                                  if(found)

                                                                                  {

                                                                                                pnb[i].showAccount();

                                                                                                break;

                                                                                  }

                                                                                  }

                                                                                  if(!found)

                                                                                  {

                                                                                                cout<<"No Recod Found.."<<endl;

                                                                                                }           

                                                                                                break;

                                                                                                case 3:

                                                                                                             cout<<"Ente account number u want to deposit:";

                                                                                                             cin>>id;

                                                                                                             for(i=0;i<=2;i++)

                                                                                                             {

                                                                                                                           found=pnb[i].search(id);

                                                                                                                           if(found)

                                                                                                                           {

                                                                                                                                         pnb[i].showAccount();

                                                                                                                                         pnb[i].deposit();

                                                                                                                                         pnb[i].showAccount();

                                                                                                                                         break;

                                                                                                                           }

                                                                                                             }

                                                                                                             if(!found)

                                                                                                             {

                                                                                                                           cout<<"No recod found:";

                                                                                                             }

                                                                                                             break;

                                                                                                             case 4:

                                                                                                                           cout<<"Enter Account Number u want to withdrawal:";

                                                                                                                           cin>>id;

                                                                                                                           for(i=0;i<=2;i++)

                                                                                                                           {

                                                                                                                                         found=pnb[i].search(id);

                                                                                                                                         if(found)

                                                                                                                                         {

                                                                                                                                                       pnb[i].showAccount();

                                                                                                                                                       pnb[i].withdrawal();

                                                                                                                                                       pnb[i].showAccount();

                                                                                                                                                      break;

                                                                                                                                         }

                                                                                                                           }

                                                                                                                           if(!found)

                                                                                                                           {

                                                                                                                                         cout<<"no Recod Found....";

                                                                                                                           }

                                                                                                                           break;

                                                                                                                           case 5:

                                                                                                                                         cout<<"GOOD BYE...\n";

                                                                                                                                         break;

                                                                                                                                         default:

                                                                                                                                                       cout<<"\nwrong optiom..\a\n";

                           }

              }while(ch!=5);

}
