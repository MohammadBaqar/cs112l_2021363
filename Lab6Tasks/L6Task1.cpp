#include <iostream>

#include <string>

using namespace std;

class Coordinator;

class Person
{

private:
    string competitionuni;

public:
    friend class Coordinator;
};

class Coordinator
{
private:
    Person p1, p2;

public:
    void check()
    {

        int l1, l2;

        string s1(""), s2("");

        cout << "Enter the  competition name and university name  of first person: ";

        getline(cin, p1.competitionuni);

        cout << "Enter the  competition name and university name  of second person: ";

        getline(cin, p2.competitionuni);

        l1 = p1.competitionuni.length();

        l2 = p2.competitionuni.length();

        for (int i = 0; i < l1; i++)
        {

            if (p1.competitionuni[i] == ' ')
            {
                i++;

                for (int j = i; j < l1; j++)
                {

                    s1 = s1 + p1.competitionuni[j];
                }
                break;
            }
        }

        for (int i = 0; i < l2; i++)
        {

            if (p2.competitionuni[i] == ' ')
            {
                i++;

                for (int j = i; j < l2; j++)
                {

                    s2 = s2 + p2.competitionuni[j];
                }
                break;
            }
        }

        l1 = p1.competitionuni.length() - s1.length() - 1;

        l2 = p2.competitionuni.length() - s2.length() - 1;

        int maxLength = l1;

        if (l1 < l2)
        {
            maxLength = l2;
        }

        if (s1 == s2)
        {
            cout << "Message from the coordinator person 1 and person 2 are roommates, and room number is " << maxLength << endl;
        }

        else
        {
            cout << "Message from the coordinator person 1 and person 2 are not roommates\n";
        }
    }
};

int main()
{

    Coordinator c1;

    while (true)
    {
        cout << "\n\n";
        c1.check();
    }

    return 0;
}