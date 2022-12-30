#include<iostream>

using namespace std;

class hero

{

              private:

                           int id;

                           string bike_name;

                           long price;

                           static int splendour_count;

                           static int glamor_count;

                           static int passion_count;

                           public:

                                         void getbike()

                                         {

                                                       cout<<"Enter bike id:";

                                                       cin>>id;

                                                       cout<<"Enter Bike name:";

                                                       cin>>bike_name;

                                                       cout<<"Enter baki price:";

                                                       cin>>price;

                                         }

                                         void showbike()

                                         {

                                                       cout<<"Bike Id:"<<id<<endl;

                                                       cout<<"Bike name:"<<bike_name<<endl;

                                                       cout<<"Bike price:"<<price<<endl;

                                                       count();

                                                      

                                         }

                                        

                                                       void count()

                           {

                          

                           if(bike_name=="passion")

                                         {

                                                       passion_count+=1;

                                         }

                                         else if(bike_name=="splendour")

                                         {

                                                       splendour_count+=1;

                                         }

                                                       else

                                         {

                                                       glamor_count+=1;

                                         }

                           }

                           static void showcount()

                           {

                                         cout<<"Total splendour Bike:"<<splendour_count<<endl;

                                         cout<<"Total glamor Bike:"<<glamor_count<<endl;

                                         cout<<"Total Passion Bike:"<<passion_count<<endl;

                           }

};

int hero::splendour_count;

int hero::glamor_count;

int hero::passion_count;

 

int main()

{

              hero bike[3];

              int i;

              for(i=0;i<=2;i++)

              {

                           bike[i].getbike();

              }

              for(i=0;i<=2;i++)

              {

                           bike[i].showbike();

              }

     hero::showcount();

}
