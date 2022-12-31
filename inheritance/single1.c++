#include <iostream>

using namespace std;

class student

{

private:
    int rollno;

    string name;

public:
    void getstudent()

    {

        cout << "Enter Roll Number:";

        cin >> rollno;

        cout << "Enter Name:";

        cin >> name;
    }

    void putstudent()

    {

        cout << "Roll Number:-" << rollno << endl;

        cout << "Name:-" << name << endl;
    }
};

class bsc : public student

{

private:
    int p, c, m;

public:
    void getbsc()

    {

        cout << "Enter Physics Marks:";

        cin >> p;

        cout << "Enter Chemistry Marks:";

        cin >> c;

        cout << "Enter Maths Marks:";

        cin >> m;
    }

    void putbsc()

    {

        cout << "Physics marks:-" << p << endl;

        cout << "Chemistry Marks:-" << c << endl;

        cout << "Maths Marks:-" << m << endl;
    }
};

class bcom : public student

{

private:
    int e, a, b;

public:
    void getbcom()

    {

        cout << "Enter Economics Marks:";

        cin >> e;

        cout << "Enter Acountancy Marks:";

        cin >> a;

        cout << "Enter Business Marks:";

        cin >> b;
    }

    void putbcom()

    {

        cout << "Economics marks:-" << e << endl;

        cout << "Accountancy Marks:-" << a << endl;

        cout << "Business Marks:-" << b << endl;
    }
};

int main()

{

    bsc s;

    bcom b;

    s.getstudent();

    s.getbsc();

    s.putstudent();

    s.putbsc();

    b.getstudent();

    b.getbcom();

    b.putstudent();

    b.putbcom();
}