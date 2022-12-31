#include <iostream>

using namespace std;

class twonum

{

private:
    int x, y;

public:
    void getnumber()

    {

        cout << "Enter value of x:";

        cin >> x;

        cout << "Enter Value of y:";

        cin >> y;
    }

    void putnumber()

    {

        cout << "Value of X:-" << x << endl;

        cout << "Value of y:-" << y << endl;
    }

    void add(twonum a, twonum b)

    {

        x = a.x + b.x;

        y = a.y + b.y;
    }
};

int main()

{

    twonum t1, t2, t3;

    t1.getnumber();

    t2.getnumber();

    t3.add(t1, t2);

    t1.putnumber();

    t2.putnumber();

    t3.putnumber();
}
