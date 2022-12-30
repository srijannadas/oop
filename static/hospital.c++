#include<iostream>

using namespace std;

class fortis

{

              int id;

              string name;

              string type;

              float billamt;

              static int total_bm,total_sm,total_bpl;

              static float totalamount_bm,totalamount_sm,totalamount_bpl;

              static float netamount;

              public:

                           void getpatient()

                           {

                                         cout<<"Enter Patient id:";

                                         cin>>id;

                                         cin.ignore();

                                         cout<<"Enter patient name:";

                                         getline(cin, name);

                                         cout<<"Enter Patient Type:";

                                         cin>>type;

                                         cout<<"Enthe The Bill amount:";

                                         cin>>billamt;

                                         if(type=="bm")

                                         {

                                                       total_bm+=1;

                                                       totalamount_bm+=billamt;

                                         }

                                         else if(type=="sm")

                                         {

                                             total_sm+=1;

                                                       totalamount_sm+=billamt;

                                         }

                                         else if(type=="bpl")

                                         {

                                                       total_bpl+=1;

                                                       totalamount_bpl+=billamt;

                                         }

                           }

                           void showpatient()

                           {

                                         cout<<"Patient Id:-"<<id<<endl;

                                         cout<<"Patient name:-"<<name<<endl;

                                         cout<<"Patient Type:-"<<type<<endl;

                                         cout<<"Amount:-"<<billamt<<endl;

                                        

                           }

                           static void showsummery()

                           {

                                         cout<<"Total Business Men:-"<<total_bm<<endl;

                                         cout<<"Total Amount of Business Men:-"<<totalamount_bm<<endl;

                                         cout<<"Total Service Man:-"<<total_sm<<endl;

                                         cout<<"Total Amount Of Service Men:"<<totalamount_sm<<endl;

                                         cout<<"Total Below proverty People:-"<<total_bpl<<endl;

                                         cout<<"Total Amount  of Bpl:-"<<totalamount_bpl<<endl;

                                         netamount=totalamount_bm+(totalamount_sm-(0.20*totalamount_sm))+totalamount_bpl-(1*totalamount_bpl);

                                         cout<<"Netamount:-"<<netamount<<endl;

                           }

};

int fortis::total_bm;

int fortis::total_sm;

int fortis::total_bpl;

float fortis::totalamount_bm;

float fortis::totalamount_sm;

float fortis::totalamount_bpl;

float fortis::netamount;

 

int main()

{

              fortis f[3];

              int i;

              for(i=0;i<=2;i++)

              {

                           f[i].getpatient();

              }

              for(i=0;i<=2;i++)

              {

                           f[i].showpatient();

              }

 

  fortis::showsummery();

}

 