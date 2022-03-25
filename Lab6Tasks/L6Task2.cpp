#include <iostream>

#include <string>

using namespace std;

class Entry
{

private:
    string id;

    string name;

    string rank;

public:
    int k = 0;

    void set()
    {

        int l1;

        cout << "Enter the id of the offcier please\n";

        cin >> id;

        cout << "Enter the name of officer please\n";

        cin >> name;

        cout << "Enter the rank of the officer please\n";

        cin >> rank;

        l1 = id.length();

        for (int i = 0; i < l1; i++)
        {

            if (id[i] == id[l1 - i - 1])
            {

                if (i == l1 - 1)
                {

                    cout << "The offficer is not allowed to enter in the resricted area\n";
                    k--;
                }
                continue;
            }

            else
            {

                cout << "The offficer is  allowed to enter in the resricted area\n";

                break;
            }
        }

        k++;
    }
};

int main()
{

    int choice;

    Entry e1;

choiceMenue:

    system("CLS");

    cout << "1.Enter id of officer \n"
         << "2.Get total number of officers\n"
         << "3.Exit\n"
         << "0 to go to the choice menue\n";

    cin >> choice;

    switch (choice)
    {

    case 1:

        e1.set();

        break;

    case 2:

        cout << "The total number of entries are: " << e1.k << endl;

        break;

    case 3:

        cout << "Thank You\n";

        break;

    default:

        cout << "Enter appropriate choice please\n";

        goto choiceMenue;
    }

    cin >> choice;

    if (choice == 0)
    {

        goto choiceMenue;
    }
}