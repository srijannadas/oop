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

        cout << "Enter Roll Number:";

        cin >> roll;

        cout << "Enter Name:";

        cin >> name;
    }

    void pustudent()

    {

        cout << "Roll Number:-" << roll << endl;

        cout << "Name:-" << name << endl;
    }
};

class bsc : public student

{

protected:
    int p, c, m;

public:
    void getbsc()

    {

        getstudent();

        cout << "Enter Physics Marks:";

        cin >> p;

        cout << "Enter chemistry Marks:";

        cin >> c;

        cout << "Enter Maths Marks:";

        cin >> m;
    }

    void putbsc()

    {

        pustudent();

        cout << "Physics Marks:-" << p << endl;

        cout << "chemistry Marks:-" << c << endl;

        cout << "Enter Maths Marks:-" << m << endl;
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

        total = p + c + m;
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