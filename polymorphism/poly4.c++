#include <iostream>

using namespace std;

class employee

{

private:
    int salary;

public:
    void getsalary()

    {

        cout << "Enter salary:";

        cin >> salary;
    }

    void showsalary()

    {

        cout << "Salary:-" << salary << endl;
    }

    void putsalary(int bonus = 0)

    {

        salary += bonus;

        cout << "Salary:-" << salary << endl;
    }

    void pusalary(float time, float rate = 8)

    {

        float ia = (salary * time * rate) / 100;

        cout << "Intrest Amount:-" << ia << endl;

        salary += ia;

        cout << "Salary:-" << salary << endl;
    }
};

int main()

{

    employee e1, e2, e3;

    e1.getsalary();

    e2.getsalary();

    e3.getsalary();

    e1.pusalary(2.0f);

    e2.putsalary(10000);

    e3.showsalary();
}