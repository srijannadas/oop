#include <iostream>

using namespace std;

class student

{

private:
    int roll;

    string name;

public:
    void getstudent()

    {

        cout << "Enter Roll Number:-";

        cin >> roll;

        cout << "Enter Name:-";

        cin >> name;
    }

    void pustudent()

    {

        cout << "Roll number:-" << roll << endl;

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

        getstudent();

        cout << "Enter Physics Marks:";

        cin >> p;

        cout << "Enter Chemistry Marks:";

        cin >> c;

        cout << "Enter Maths Marks:";

        cin >> m;
    }

    void putbsc()

    {

        pustudent();

        cout << "Physics Marks:-" << p << endl;

        cout << "Chemistry Marks:-" << c << endl;

        cout << "Maths Marks:-" << m << endl;
    }

    int gettotal()

    {

        int t = p + c + m;

        return (t);
    }
};

class result : public bsc

{

private:
    int total;

public:
    void getresult()

    {

        getbsc();

        total = gettotal();
    }

    void putresult()

    {

        putbsc();

        cout << "Total:-" << total << endl;
    }
};

int main()

{

    result s;

    s.getresult();

    s.putresult();
}