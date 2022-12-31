#include <iostream>

using namespace std;

class employee

{

private:
    int salary;

public:
    void getsalary()

    {

        cout << "Enter Salary:";

        cin >> salary;
    }

    void putsalary()

    {

        cout << "Salary:-" << salary << endl;
    }

    void putsalary(int bonus)

    {

        salary = salary + bonus;

        cout << "salary:-" << salary << endl;
    }
};

int main()

{

    employee e1, e2;

    e1.getsalary();

    e2.getsalary();

    e1.putsalary();

    e2.putsalary(2000);
}