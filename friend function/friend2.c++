#include <iostream>

using namespace std;

class student;

class practicle

{

private:
    int pp, pc;

public:
    void getptacticalmarks()

    {

        cout << "Enter physics practical marks:";

        cin >> pp;

        cout << "Enter Chemistry Practical marks:";

        cin >> pc;
    }

    void showpracticlemarks()

    {

        cout << "physics practical marks:-" << pp << endl;

        cout << "Chemistry Practical:-" << pc << endl;
    }

    friend void result(student, practicle);
};

class student

{

private:
    int p, c, m;

    string name;

public:
    void getmarks()

    {

        cout << "Enter Student Name:";

        cin >> name;

        cout << "enter Physics Marks:";

        cin >> p;

        cout << "Enter Cemistry marks:";

        cin >> c;

        cout << "Enter Math Marks:";

        cin >> m;
    }

    void showmarks()

    {

        cout << "Student Name:-" << name << endl;

        cout << "Physics Marks:-" << p << endl;

        cout << "Chemistry Marks:-" << c << endl;

        cout << "Maths Marks:-" << m << endl;
    };

    friend void result(student, practicle);
};

void result(student s, practicle p)

{

    int ttm, tpm, nettotal;

    float pr;

    ttm = s.p + s.c + s.m;

    tpm = p.pp + p.pc;

    nettotal = ttm + tpm;

    pr = nettotal / 3;

    cout << "Total Theory Marks:-" << ttm << endl;

    cout << "Total Practicle Marks:-" << tpm << endl;

    cout << "Total Marks:-" << nettotal << endl;

    cout << "Percentage:-" << pr << endl;

    if (pr >= 60)

    {

        cout << "Pass" << endl;
    }

    else

    {

        cout << "Faield";
    }
}

int main()

{

    student s;

    practicle p;

    s.getmarks();

    p.getptacticalmarks();

    s.showmarks();

    p.showpracticlemarks();

    cout << "After Adding Total Marks:" << endl;

    result(s, p);
}