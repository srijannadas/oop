#include<iostream>

using namespace std;

class batsman

{

              private:

                           int batsmancode;

                           string name;

                           int ing,runs,notout;

                           int batavg;

                           int getcalavg()

                           {

                                         batavg=runs/ing-notout;

                                         return batavg;

                           }

                           public:

                                         void readdata()

                                         {

                                                       cout<<"enter batsman code:";

                                                       cin>>batsmancode;

                                                       cin.ignore();

                                                       cout<<"enter batsmen name:";

                                                       getline(cin, name);

                                                       cout<<"enter innig:";

                                                       cin>>ing;

                                                       cout<<"enter runs:";

                                                       cin>>runs;

                                                       cout<<"enter not out:";

                                                       cin>>notout;

                                                       batavg=getcalavg();

                                         }

                                         void displaydata()

                                         {

                                                       cout<<"batsman Code:"<<batsmancode<<endl;

                                                       cout<<"Name:"<<name<<endl;

                                                       cout<<"inning:"<<ing<<endl;

                                                       cout<<"run:"<<runs<<endl;

                                                       cout<<"not out:"<<notout<<endl;

                                                       cout<<"avgerage:"<<batavg<<endl;

                                         }

                           };

                           int main()

                           {

                                         batsman b;

                                        

                                         b.readdata();

                                         b.displaydata();

                           }
