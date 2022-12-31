
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

}