#include <iostream>
#include <cmath>

using namespace std;

void Power(float, float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);
void Multiply(float, float);
void Add(float, float);
void Subtract(float, float);
void Modulo(float, float);

int main()
{
    float a, b;
    int z;

    cout << "WHAT YOU WANT TO FIND: " << endl;
    cout << "Press '1' for Power: " << endl;
    cout << "Press '2' for Sin: " << endl;
    cout << "Press '3' for Square: " << endl;
    cout << "Press '4' for Cos: " << endl;
    cout << "Press '5' for Tan: " << endl;
    cout << "Press '6' for Log: " << endl;
    cout << "Press '7' for Base Log: " << endl;
    cout << "Press '8' for Multiplication: " << endl;
    cout << "Press '9' for Addition: " << endl;
    cout << "Press '10' for Subtraction: " << endl;
    cout << "Press '11' for Modulo: " << endl;

    cin >> z;

    switch (z)
    {
        case 1:
            cout << "Enter the Number for Calculating its Power: " << endl;
            cin >> a;
            cout << "Enter the Power for a Number: " << endl;
            cin >> b;
            Power(a, b);
            break;

        case 2:
            cout << "Enter the Number for Calculating SIN: " << endl;
            cin >> a;
            Sine(a);
            break;

        case 3:
            cout << "Enter the Number for Calculating Square: " << endl;
            cin >> a;
            Square(a);
            break;

        case 4:
            cout << "Enter the Number for Calculating COS: " << endl;
            cin >> a;
            Cos(a);
            break;

        case 5:
            cout << "Enter the Number for Calculating TAN: " << endl;
            cin >> a;
            Tan(a);
            break;

        case 6:
            cout << "Enter the Number for Calculating LOG: " << endl;
            cin >> a;
            Log(a);
            break;

        case 7:
            cout << "Enter the Number for Calculating LOG WITH BASE 10: " << endl;
            cin >> a;
            Baselog(a);
            break;

        case 8:
            cout << "Enter the First Number for Multiplication: " << endl;
            cin >> a;
            cout << "Enter the Second Number for Multiplication: " << endl;
            cin >> b;
            Multiply(a, b);
            break;

        case 9:
            cout << "Enter the First Number for Addition: " << endl;
            cin >> a;
            cout << "Enter the Second Number for Addition: " << endl;
            cin >> b;
            Add(a, b);
            break;

        case 10:
            cout << "Enter the First Number for Subtraction: " << endl;
            cin >> a;
            cout << "Enter the Second Number for Subtraction: " << endl;
            cin >> b;
            Subtract(a, b);
            break;

        case 11:
            cout << "Enter the First Number for Modulo: " << endl;
            cin >> a;
            cout << "Enter the Second Number for Modulo: " << endl;
            cin >> b;
            Modulo(a, b);
            break;
    }

    return 0;
}

void Power(float x, float y)
{
    float p;
    p = pow(x, y);
    cout << "Power: " << p << endl;
}

void Sine(float x)
{
    float s;
    s = sin(x);
    cout << "Sin: " << s << endl;
}

void Square(float x)
{
    float sq;
    sq = sqrt(x);
    cout << "Square of a Given Value is: " << sq << endl;
}

void Cos(float x)
{
    float c;
    c = cos(x);
    cout << "COS: " << c << endl;
}

void Tan(float x)
{
    float t;
    t = tan(x);
    cout << "TAN: " << t << endl;
}

void Log(float x)
{
    float l;
    l = log(x);
    cout << "Natural Logarithm: " << l << endl;
}

void Baselog(float x)
{
    float bl;
    bl = log10(x);
    cout << "LOG with Base 10: " << bl << endl;
}

void Multiply(float x, float y)
{
    float result = x * y;
    cout << "Multiplication: " << result << endl;
}

void Add(float x, float y)
{
    float result = x + y;
    cout << "Addition: " << result << endl;
}

void Subtract(float x, float y)
{
    float result = x - y;
    cout << "Subtraction: " << result << endl;
}

void Modulo(float x, float y)
{
    if (y != 0)
    {
        int result = fmod(x, y);
        cout << "Modulo: " << result << endl;
    }
    else
    {
        cout << "Cannot perform modulo with divisor 0" << endl;
    }
}
