#include <iostream>
using namespace std;

// Function Prototypes
int arthi();
int eve(long int k);
double facto(long int o);
int sum();
int digit();
int power();

int main()
{
    int e, a;

start:

    cout << "\n\nEnter 1 to continue with this calculator or 0 to exit:\n";
    cin >> a;

    if (a == 1)
    {
        cout << "\n\n===== CALCULATOR MENU =====\n";
        cout << "1. Arithmetic Operations\n";
        cout << "2. Power Calculation\n";
        cout << "3. Sum of Digits\n";
        cout << "4. Sum of First N Natural Numbers\n";
        cout << "5. Factorial\n";
        cout << "6. Even or Odd Checker\n";

        cout << "\nEnter your choice: ";
        cin >> e;

        switch (e)
        {
            case 1:
                arthi();
                break;

            case 2:
                power();
                break;

            case 3:
                digit();
                break;

            case 4:
                sum();
                break;

            case 5:
            {
                long int b;
                double c;

                cout << "\nInsert the number: ";
                cin >> b;

                c = facto(b);

                if (c >= 0)
                {
                    cout << "\n" << b << "! = " << c << endl;
                }

                break;
            }

            case 6:
            {
                long int p;

                cout << "\nInsert the number: ";
                cin >> p;

                eve(p);

                break;
            }

            default:
                cout << "\nPlease enter a correct value.\n";
        }
    }

    else if (a == 0)
    {
        cout << "\nProgram terminated.\n";
        return 0;
    }

    else
    {
        cout << "\nPlease enter only 0 or 1.\n";
    }

    goto start;
}

// ===============================
// Arithmetic Function
// ===============================

int arthi()
{
    long int x, y;
    double z;
    char c;

    cout << "\nEnter expression (example: 5 + 3): ";
    cin >> x >> c >> y;

    switch (c)
    {
        case '+':
            z = x + y;
            break;

        case '-':
            z = x - y;
            break;

        case '*':
            z = x * y;
            break;

        case '/':
            if (y == 0)
            {
                cout << "\nUndefined (division by zero)\n";
                return 0;
            }

            z = (double)x / y;
            break;

        default:
            cout << "\nInvalid operator.\n";
            return 0;
    }

    cout << "\nThe result is: " << z << endl;

    return 0;
}

// ===============================
// Power Function
// ===============================

int power()
{
    long int base, exponent;
    double result = 1;

    cout << "\nEnter base number and exponent: ";
    cin >> base >> exponent;

    if (exponent > 0)
    {
        for (int i = 1; i <= exponent; i++)
        {
            result *= base;
        }
    }

    else if (exponent == 0)
    {
        result = 1;
    }

    else
    {
        for (int i = 1; i <= -exponent; i++)
        {
            result *= base;
        }

        result = 1 / result;
    }

    cout << "\nThe result is: " << result << endl;

    return 0;
}

// ===============================
// Sum of Digits Function
// ===============================

int digit()
{
    long int x, digitValue, sum = 0;

    cout << "\nEnter a number: ";
    cin >> x;

    while (x != 0)
    {
        digitValue = x % 10;
        sum += digitValue;
        x /= 10;
    }

    cout << "\nThe sum of digits is: " << sum << endl;

    return 0;
}

// ===============================
// Sum of Natural Numbers Function
// ===============================

int sum()
{
    long int q, total = 0;

    cout << "\nInsert a natural number: ";
    cin >> q;

    if (q > 0)
    {
        for (int i = 1; i <= q; i++)
        {
            total += i;
        }

        cout << "\nThe sum of first " << q
             << " natural numbers is: " << total << endl;
    }

    else
    {
        cout << "\nThe number is not a natural number.\n";
    }

    return 0;
}

// ===============================
// Factorial Function
// ===============================

double facto(long int o)
{
    double fact = 1;

    if (o < 0)
    {
        cout << "\nFactorial of negative numbers is undefined.\n";
        return -1;
    }

    for (int i = 1; i <= o; i++)
    {
        fact *= i;
    }

    return fact;
}

// ===============================
// Even or Odd Function
// ===============================

int eve(long int k)
{
    if (k % 2 == 0)
    {
        cout << "\n" << k << " is an EVEN number.\n";
    }

    else
    {
        cout << "\n" << k << " is an ODD number.\n";
    }

    return 0;
}