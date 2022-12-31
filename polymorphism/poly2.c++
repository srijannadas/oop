#include <iostream>

using namespace std;

float sum(float a, float b)

{

    float c = a + b;

    cout << c << endl;
}

int sum(int a, int b)

{

    int d = a + b;
}

int main()

{

    int x;

    x = sum(10, 20);

    cout << x << endl;

    float s;

    s = sum(21.2f, 30.2f);

    cout << s << endl;
}