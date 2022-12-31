#include <iostream>

using namespace std;

class sbindia;

class sbindore

{

private:
    long bankbalance;

public:
    void getbalance()

    {

        cout << "Enter Indore Bank Balance:-";

        cin >> bankbalance;
    }

    void showbankbalance()

    {

        cout << "Indore BankBalance:-" << bankbalance << endl;
    }

    friend void rbi(sbindia &, sbindore &);
};

class sbindia

{

private:
    long bankbalance;

public:
    void getbalance()

    {

        cout << "Enter India Bank Balance:-";

        cin >> bankbalance;
    }

    void showbankbalance()

    {

        cout << "India BankBalance:-" << bankbalance << endl;
    }

    friend void rbi(sbindia &, sbindore &);
};

void rbi(sbindia &ind, sbindore &indr)

{

    ind.bankbalance += indr.bankbalance;

    indr.bankbalance = 0;
}

int main()

{

    sbindore indr;

    sbindia ind;

    indr.getbalance();

    indr.showbankbalance();

    ind.getbalance();

    ind.showbankbalance();

    rbi(ind, indr);

    cout << "After Merger:" << endl;

    ind.showbankbalance();

    indr.showbankbalance();
}