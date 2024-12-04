#include <iostream>
using namespace std;

int main(void)
{
    int num1;
    int num2;
    char opera;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter an operation(+, -, /, *): ";
    cin >> opera;

    cout << "Enter another number: ";
    cin >> num2;

    if (opera == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
    }
    else if (opera == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
    }
    else if (opera == '/')
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
    }
    else if (opera == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
    }
    else
        cout << "Invalid operation!\n";

    return 0;
}



