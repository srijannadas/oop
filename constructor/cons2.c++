#include<iostream>

using namespace std;

class num

{

              private:

                           int n;

                           public:

                                         num(int x)

                                         {

                                                       n=x;

                                         }

                                         num()

                                         {

                                                       int x=100;

                                         }

                                         void getvalue()

                                         {

                                                       cout<<"Enter value:";

                                                       cin>>n;

                                         }

                                         void showvalue()

                                         {

                                                       cout<<n<<endl;

                                         }

};

int main()

{

              num t(20);

              t.showvalue();

              t.getvalue();

              t.showvalue();

              num m;

              m.getvalue();

              m.showvalue();

}