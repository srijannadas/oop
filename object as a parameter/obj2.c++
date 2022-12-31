#include <iostream>

using namespace std;

class twonum

{

private:
    int x, y;

public:
    void getvalue()

    {

        cout << "Enter value of x:";

        cin >> x;

        cout << "Enter Value of y:";

        cin >> y;
    }

    void Showvalue()

    {

        cout << "value of X:-" << x << endl;

        cout << "value of Y:-" << y << endl;
    }

    twonum add(twonum);
};

twonum twonum::add(twonum a)

{

    twonum r;

    r.x = x + a.x;

    r.y = y + a.y;

    return r;
}

int main()

{

    twonum t1, t2, t3;

    t1.getvalue();

    t2.getvalue();

    t3 = t1.add(t2);

    t1.Showvalue();

    t2.Showvalue();

    t3.Showvalue();
}