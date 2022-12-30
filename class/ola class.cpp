#include<iostream>

using namespace std;

class ola

{

     private:

        int carid;
        string model;
        int nfs;
        int rpkm;
         string carstatus;

     public:

             void getcar()

                {

                           cout<<"Enter Car Id:";

                           cin>>carid;

                           cout<<"Enter Car Model:";

                           cin>>model;

                           cout<<"Enter car status\n1]avl if avlaile\n2]notavl if not avlaible\n";

                           cin>>carstatus;

                           cout<<"Enter Number Of seats:";

                           cin>>nfs;

                           cout<<"Enter Rate per kilometer:";

                           cin>>rpkm;

                  }

                  void showcar()

                  {

                           cout<<"Car Id:-"<<carid<<endl;

                           cout<<"Car Model:-"<<model<<endl;

                           cout<<"car status:-"<<carstatus<<endl;

                           cout<<"Number Of Seats:-"<<nfs<<endl;

                           cout<<"Rate Per Killometer:-"<<rpkm<<endl;

                           }

                           void forrent()

                           {

                                         int passenger,distance,rent;

                                         string s="avl";

                                         if(carstatus=="avl")

                                         {

                                                       cout<<"Enter total person:-";

                                                       cin>>passenger;

                                                       cout<<"Enter distance you Want To travel:-";

                                                       cin>>distance;

                                        

                                         if(passenger<=2)

                                         {

                                                       int rent=distance*rpkm;

                                                       cout<<"Total amount:-"<<rent<<"Rupees"<<endl;

                                         }

                                         else if(passenger>=2)

                                         {

                                                       int extra_passenger=passenger-2;

                                                       int rent=(200*extra_passenger)+(distance*rpkm);

                                                       cout<<"Total Amount:-"<<rent<<"rupees"<<endl;

                                         }

                           }

                                         else

                                         {

                                                       cout<<"Car Not availabe";

                                         }

                                        

                           }

                           int serach(int);

};

int ola::serach(int id)

{

              if(carid==id)

              {

                           return(1);

              }

              return(0);

}

int main()

{

              ola o[3];

              int i;

              for(i=0;i<=2;i++)

              {

                           o[i].getcar();

              }

              int ch,id,found=0;

              do

              {

              cout<<"main menu\n1]Show All Cars\n2]search car by id\n3]Book car\n4]exit"<<endl;

              cout<<"Enter Your choice:-";

              cin>>ch;

              switch(ch)

              {

                           case 1:

                                         for(i=0;i<=2;i++)

                                         {

                                                       o[i].showcar();

                                         }

                                         break;

                                         case 2:

                                                       cout<<"Enter Card Id You Want To Search:-";

                                                       cin>>id;

                                                       for(i=0;i<=2;i++)

                                                       {

                                                                    found=o[i].serach(id);

                                                                    if(found)

                                                                    {

                                                                                  o[i].showcar();

                                                                                  break;

                                                                    }

                                                       }

                                                       if(!found)

                                                       {

                                                                    cout<<"No Car Found..";

                                                       }

                                                       break;

                                                       case 3:

                                                                    cout<<"Enter Car Id You Want To book:-";

                                                                    cin>>id;

                                                                    for(i=0;i<=2;i++)

                                                                    {

                                                                                  found=o[i].serach(id);

                                                                                  if(found)

                                                                                  {

                                                                                                o[i].showcar();

                                                                                                o[i].forrent();

                                                                                                break;

                                                                                  }

                                                                    }

                                                                    if(!found)

                                                                    {

                                                                                  cout<<"No Car found";

                                                                    }

                                                                    break;

                                                                    case 4:

                                                                                  cout<<"Good Bye..."<<endl;

                                                                                  break;

                                                                                  default:

                                                                                                cout<<"Wrong Option\a";

    }

              }while(ch!=4);

}
