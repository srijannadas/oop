#include<iostream>

using namespace std;

class time

{

              private:

                           int h,m,s;

                           public:

                                         void gettime()

                                         {

                                                       cout<<"Enter hour:";

                                                       cin>>h;

                                                       cout<<"Enter minutes:";

                                                       cin>>m;

                                                       cout<<"Enter Second:";

                                                       cin>>s;

                                         }

                                         void Showtime()

                                         {

                                                       cout<<"Hour:-"<<h<<endl;

                                                       cout<<"Minute:-"<<m<<endl;

                                                       cout<<"Second:-"<<s<<endl;

                                         }

                                         time add(time a);

};

time time::add(time a)

{

              time r;

              r.h=h+a.h;

              r.m=m+a.m;

              r.s=s+a.s;

             

              r.m=r.m+(r.s/60);

              r.s=r.s%60;

             

              r.h=r.h+(r.m/60);

              r.m=r.m%60;

             

              int d=r.h/24;

              cout<<"Days:-"<<d<<endl;

              r.h=r.h%42;

              return r;

}

int main()

{

              time t1,t2,t3;

              t1.gettime();

              t1.Showtime();

              t2.gettime();

              t2.Showtime();

              t3=t1.add(t2);

              t3.Showtime();

}

 