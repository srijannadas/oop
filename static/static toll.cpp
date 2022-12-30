#include<iostream>

using namespace std;

class tollroad

{

              private:

                           int vid;

                           string name;

                           string type;

                           static int hv,lv,gv;

                           static int hv_collect,lv_collect,gv_collect;

                           static int net_amount;

                           public:

                                         void gettax()

                                         {

                                                       cout<<"Enter Vehical Id:-";

                                                       cin>>vid;

                                                       cout<<"Enter Vehical Name:-";

                                                       cin>>name;

                                                       cout<<"Enter Vehical Type:-";

                                                       cin>>type;

                                                       if(type=="hv")

                                                       {

                                                                    hv+=1;

                                                                    hv_collect+=400;

                                                       }

                                                       else if(type=="lv")

                                                       {

                                                                    lv+=1;

                                                                    lv_collect+=200;

                                                       }

                                                       else

                                                       {

                                                                    gv+=1;

                                                                    gv_collect+=0;

                                                       }

                                         }

                                         void showtax()

                                         {

                                                       cout<<"Vehical Id:-"<<vid<<endl;

                                                       cout<<"Vehical Name:-"<<name<<endl;

                                                       cout<<"Vehical Type:-"<<type<<endl;

                                         }

                               static void showsummery()

                                         {

                                                       cout<<"Total Number of Havey Vehical:-"<<hv<<endl;

                                                       cout<<"Total Number Of Light Vehical:-"<<lv<<endl;

                                                       cout<<"Total Number of Goverment Vehical:-"<<gv<<endl;

                                                       cout<<"Total collection of havey vehical:"<<hv_collect<<endl;

                                                       cout<<"Total Collection of Light vehical:-"<<lv_collect<<endl;

                                                       cout<<"Total Collection Of Goverment Vehical:-"<<gv_collect<<endl;

                                                       net_amount=hv_collect+lv_collect+gv_collect;

                                                       cout<<"NetAmount:-"<<net_amount;

                                         }                                       

};

int tollroad::hv;

int tollroad::lv;

int tollroad::gv;

int tollroad::hv_collect;

int tollroad::lv_collect;

int tollroad::gv_collect;

int tollroad::net_amount;

 

int main()

{

              tollroad t[3];

              int i;

              for(i=0;i<=2;i++)

              {

                           t[i].gettax();

              }

              for(0;i<=2;i++)

              {

                           t[i].showtax();

              }

              tollroad::showsummery();

}
