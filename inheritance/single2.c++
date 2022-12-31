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

        cout << "Enter roll number:";

        cin >> rollno;

        cout << "Enter name:";

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

        getstudent();

        cout << "Enter Physics Marks:";

        cin >> p;

        cout << "Enter Maths Marks:";

        cin >> m;

        cout << "Entre chemistry Marks:";

        cin >> c;
    }

    void putbsc()

    {

        putstudent();

        cout << "Physics Marks:-" << p << endl;

        cout << "Maths MArks:-" << m << endl;

        cout << "Chemsitry Marks:-" << c << endl;
    }
};

int main()

{

    bsc b;

    b.getbsc();

    b.putbsc();
}