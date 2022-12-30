#include<iostream>

using namespace std;

class product

{

              private:

                           int productid;

                           string name;

                           int rate;

                           public:

                                         void getProduct()

                                         {

                                                       cout<<"Enter product id:";

                                                       cin>>productid;

                                                       cout<<"Enetr Product Name:";

                                                       cin>>name;

                                                       cout<<"Enter Product Rate:";

                                                       cin>>rate;

                                         }

                                         void showProduct()

                                         {

                                                       cout<<"Product Id:-"<<productid<<endl;

                                                       cout<<"Product Name:-"<<name<<endl;

                                                       cout<<"Product Rate:-"<<rate<<endl;

                                         }

                                         int search(int );

                                         int search(int, int);

};

int product::search(int id)

{

              if(productid==id)

              {

                           return(1);

              }

              return(0);

}

int product::search(int min, int max)

{

              if(rate>=min && rate<=max)

              {

                           return(1);

              }

              return(0);

}

int main()

{

              product p[3];

              int i;

              for(i=0;i<=2;i++)

              {

                           p[i].getProduct();

              }

              int ch,id,min,max,found=0,count=0;

              do

              {

                 cout<<"Main Menu\n1]display all Product\n2]Search Product By Id\n3]Serach Product by Rate\n4]exit"<<endl;

                 cout<<"Enter Your Choice:";

                 cin>>ch;

                 switch(ch)

                 {

                           case 1:

                           for(i=0;i<=2;i++)

                           {

                                         p[i].showProduct();

                              }

                              break;

                              case 2:

                                         cout<<"Enter Product id You Want To search:-";

                                         cin>>id;

                                         for(i=0;i<=2;i++)

                                         {

                                                      found=p[i].search(id);

                                                      if(found)

                                                      {

                                                                    p[i].showProduct();

                                                                    break;

                                                          }

                                            }

                                            if(!found)

                                            {

                                                      cout<<"No Record Found..";

                                            }

                                            break;

                                            case 3:

                                                      cout<<"Enter Minimum rate of Product:";

                                                      cin>>min;

                                                      cout<<"Enter Maximum rate of Product:";

                                                      cin>>max;

                                                      count=0;

                                                      for(i=0;i<=2;i++)

                                                      {

                                                                    found=p[i].search(min, max);

                                                                    if(found)

                                                                    {

                                                                    p[i].showProduct();

                                                                    count++;

                                                          }

                                                          }

                                                          if(count==0)

                                                          {

                                                                     cout<<"No Product Found:";

                                                          }

                                                          else

                                                         {

                                                                     cout<<"Total Product Found:-"<<count<<endl;

                                                          }

                                                          break;

                                                          case 4:

                                                                     cout<<"Good Bye.."<<endl;

                                                                     default:

                                                                                  cout<<"Wrong Option\a";

                              }        

              }while(ch!=4);

}
