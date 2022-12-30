#include<iostream>

#include<windows.h>

using namespace std;

class employee

{

              private:

                           long empid,salary,contact;

                           string name,add;

                           public:

                                         void getemployee()

                                         {

                                                       cout<<"Enter Employee Id:";

                                                       cin>>empid;

                                                       cin.ignore();

                                                       cout<<"Enter Employee Name:";

                                                       getline(cin, name);

                                                       cout<<"Enter Employee Contact:";

                                                       cin>>contact;

                                                       cout<<"Enter Employee Salary:";

                                                       cin>>salary;

                                                       cout<<"Enter Employee Address:";

                                                       cin>>add;

                                         }

                                         void putemployee()

                                         {

                                                       cout<<"Employee Id:"<<empid<<endl;

                                                       cout<<"Employee Name:"<<name<<endl;

                                                       cout<<"Employee Contact:"<<contact<<endl;

                                                       cout<<"Employee Salary:"<<salary<<endl;

                                                       cout<<"Enter Employee Address:"<<add<<endl;

                                         }

                                         int search(int);

};

int employee::search(int id)

{

              if(empid==id)

              {

                           return(1);

              }

              return(0);

}

int main()

{

              employee e[10];

              int total=0,found=0,id;

              cout<<"\n\n\n\t  EMPLOYEE MANAGEMENT SYSTEM"<<endl;

              cout<<"\n\t\tSIGN UP"<<endl;

              string user,pass;

              cout<<"\t   Enter User Name:";

              cin>>user;

              cout<<"\t   Enter Password:";

              cin>>pass;

              cout<<"\n\nPlease Wait You Account Is Creating";

              for(int i=0;i<4;i++)

              {

                           cout<<".";

                           Sleep(1000);

              }

              cout<<"\n\nYour Account Is Created Successfully"<<endl;

              cout<<"\n";

    cout<<"\n\n\t  EMPLOYEE MANAGEMENT SYSTEM"<<endl;

    start:

              cout<<"\n\t\t  LOG IN"<<endl;

              string user1,pass1;

              cout<<"\t     User Name:";

              cin>>user1;

              cout<<"\t     Password:";

              cin>>pass1;

              if(user1==user && pass1==pass)

              {

                           int ch;

                           do

                           {

                           cout<<"1]Store Data"<<endl;

                           cout<<"2]show Data"<<endl;

                           cout<<"3]Search By Id"<<endl;

                           cout<<"4]Update Data"<<endl;

                           cout<<"5]Exit"<<endl;

                           cout<<"Enter Your Choice:";

                           cin>>ch;

                          switch(ch)

                           {

                                         case 1:

                                                      int a;

                                                      cout<<"How Many Data You Want To store:";

                                                      cin>>a;

                                                      for(int i=total;i<total+a;i++)

                                                      {

                                                                    cout<<"Enter Data Of Employee:"<<i+1<<endl;

                                                                    e[i].getemployee();

                                                                    }

                                                                    total=total+a;

                                                                    break;

                                                                    case 2:

                                                                                  for(int i=0;i<total;i++)

                                                                                  {

                                                                                                e[i].putemployee();

                                                                                  }

                                                                                  break;

                                                                                  case 3:

                                                                                                cout<<"Enter Id You Want To search:";

                                                                                                cin>>id;

                                                                                                for(int i=0;i<total;i++)

                                                                                                {

                                                                                                             found=e[i].search(id);

                                                                                                             if(found)

                                                                                                             {

                                                                                                                           e[i].putemployee();

                                                                                                                           break;

                                                                                                             }

                                                                                                }

                                                                                                if(!found)

                                                                                                {

                                                                                                             cout<<"No Recod Found";

                                                                                                }

                                                                                                break;

                                                                                                case 4:

                                                                                                             cout<<"Enter Employee Id You Want To Update:";

                                                                                                             cin>>id;

                                                                                                             for(int i=0;i<total;i++)

                                                                                                             {

                                                                                                                           found=e[i].search(id);

                                                                                                                           if(found)

                                                                                                                           {

                                                                                                                                         cout<<"Previous data";

                                                                                                                                         e[i].putemployee();

                                                                                                                                         cout<<"Update New Data";

                                                                                                                                         e[i].getemployee();

                                                                                                                                         break;

                                                                                                                           }

                                                                                                             }

                                                                                                             if(!found)

                                                                                                             {

                                                                                                                           cout<<"No Recod Found";

                                                                                                             }

                                                                                                             break;

                                                                                                             case 5:

                                                                                                                           cout<<"good Bye"<<endl;

                                                                                                                           break;

                                                                                                                           default:

                                                                                                                                         cout<<"\aWrong Option";

                                         }                                       

            }while(ch!=5);

                           }

                           else if(user1!=user)

                           {

                                         cout<<"\a\nIncorect Username"<<endl;

                                         Sleep(3000);

                                         goto start;

                           }

                           else if(pass1!=pass)

                           {

                                         cout<<"\a\nIncorecct Password"<<endl;

                                         Sleep(3000);

                                         goto start;

                           }

}
