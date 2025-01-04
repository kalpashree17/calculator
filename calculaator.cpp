#include <iostream> 
using namespace std;

void calculator()
{
    char operation;
    cout << "Welcome to the Calculator!" << endl;
    cout << "The following functions can be performed in it: ";
    cout << "\n 1. Addition (+)";
    cout << "\n 2. Subtraction (-)";
    cout << "\n 3. Multiplication (*)";
    cout << "\n 4. Division (/)";
    cout << "\n 5. Other";

    cout << "\nEnter the operation to be performed (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
    {
        int n;
        double sum = 0;

        cout << "How many numbers do you want to add? ";
        cin >> n;

        if (n < 2)
        {
            cout << "You need at least two numbers to perform addition." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;
        for (int i = 0; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;
            sum += num;
        }
        cout << "The total sum is: " << sum << endl;
        break;
    }
    case '-':
    {
        int n;
        double difference;

        cout << "How many numbers do you want to subtract? ";
        cin >> n;

        if (n < 2)
        {
            cout << "You need at least two numbers to perform subtraction." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;

        // Initialize difference with the first number
        cout << "Number 1: ";
        cin >> difference;

        for (int i = 1; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;
            difference -= num;
        }

        cout << "The total difference is: " << difference << endl;
        break;
    }
    case '*':
    {
        int n;
        double multiply = 1;

        cout << "How many numbers do you want to multiply? ";
        cin >> n;

        if (n < 2)
        {
            cout << "You need at least two numbers to perform multiplication." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;
        for (int i = 0; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;
            multiply *= num;
        }

        cout << "The result of multiplication is: " << multiply << endl;
        break;
    }
    case '/':
    {
        int n;
        double divide;

        cout << "How many numbers do you want to divide? ";
        cin >> n;

        if (n < 2)
        {
            cout << "You need at least two numbers to perform division." << endl;
            return;
        }

        cout << "Enter the numbers one by one:" << endl;

        // Initialize divide with the first number
        cout << "Number 1: ";
        cin >> divide;

        for (int i = 1; i < n; i++)
        {
            double num;
            cout << "Number " << i + 1 << ": ";
            cin >> num;

            if (num == 0)
            {
                cout << "Error: Division by zero is not allowed!" << endl;
                return;
            }

            divide /= num;
        }

        cout << "The result of division is: " << divide << endl;
        break;
    }
    default:
        cout << "Invalid operator! Please use +, -, *, or /." << endl;
    }
}

int main()
{
    calculator();
    return 0;
}
