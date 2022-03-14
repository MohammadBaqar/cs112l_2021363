#include <iostream>

#include <iomanip>

using namespace std;

class Swap
{

private:
    int a;

    int b;

public:
    void set_num()
    {

        cout << "Enter first number please\n";

        cin >> a;

        cout << "Enter second number please\n";

        cin >> b;
    }

    void swapno()
    {

        a = a + b;

        b = a - b;

        a = a - b;

        cout << "a is " << a << endl;

        cout << "b is " << b << endl;
    }

    void print()
    {

        cout << "first number: " << a << endl;

        cout << "second number: " << b;
    }
};

int main()
{

    Swap s;

choiceMenue:

    system("CLS");

    int choice;

    cout << "\nMAIN MENU\n"
         << "\nchoose from the below menue\n"
         << "1.   enter number\n"
         << "2.   swap number\n"
         << "3.   print number\n"
         << "4.   Exit\n"
         << "Enter your choice from 1 to 4\n";

    cin >> choice;

    switch (choice)
    {

    case 1:

        s.set_num();

        break;

    case 2:

        s.swapno();

        break;

    case 3:

        s.print();

        break;

    case 4:

        cout << "Thank you \n";

        break;

    default:

        cout << "\n Make an appropriate choice from 1 to 10\n";

        goto choiceMenue;
    }

    cout << "\n Enter 0 to back to main menue\n";

    cin >> choice;

    if (choice == 0)
    {

        goto choiceMenue;
    }

    return 0;
}