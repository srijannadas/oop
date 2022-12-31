#include<iostream>

using namespace std;

class twonum

{

              private:

                           int x,y;

                           public:

                                         void getvalue()

                                         {

                                                       cout<<"Enter value of x:";

                                                       cin>>x;

                                                       cout<<"Enter value of y:";

                                                       cin>>y;

                                         }

                                         void showvalue()

                                         {

                                                       cout<<"value of X:-"<<x<<endl;

                                                       cout<<"Value of Y:-"<<y<<endl;

                                         }

                                         twonum add(twonum a)

                                         {

                                                       twonum r;

                                                       r.x=x+a.x;

                                                       r.y=y+a.y;

                                                       return r;

                                         }

};

int main()

{

              twonum t1,t2,t3;

              t1.getvalue();

              t2.getvalue();

              t3=t1.add(t2);

              t1.showvalue();

              t2.showvalue();

              t3.showvalue();
}