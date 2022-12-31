#include <iostream>

using namespace std;

class bank

{

private:
    int acn;

    string name;

    long balance;

    static long bankbalance;

    static int count;

public:
    void getaccount()

    {

        cout << "Enter Account Number:";

        cin >> acn;

        cout << "Enter Name:";

        cin >> name;

        cout << "Enter Account Balance:";

        cin >> balance;

        bankbalance += balance;

        count += 1;
    }

    void showaccount()

    {

        cout << "Account Number:" << acn << endl;

        cout << "Account Holder Name:" << name << endl;

        cout << "Account Balance:" << balance << endl;
    }

    static void showbankbalance()

    {

        cout << "bank balance:" << bankbalance << endl;

        cout << "Total Customers:" << count << endl;
    }
};

long bank::bankbalance;

int bank::count;

int main()

{

    bank c[3];

    int i;

    for (i = 0; i <= 2; i++)

    {

        c[i].getaccount();
    }

    for (i = 0; i <= 2; i++)

    {

        c[i].showaccount();
    }

    bank::showbankbalance();
}