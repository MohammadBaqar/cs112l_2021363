#include <iostream>

using namespace std;

class TwoDArray
{

private:
    const static int size = 5;

    int A[5][5];

    int B[5][5];

    int C[5][5];

public:
    void initialize()
    {

        cout << "Enter the values of matrix A\n";

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                cin >> A[i][j];
            }
        }

        cout << "Enter the values of matrix B\n";

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                cin >> B[i][j];
            }
        }
    }

    void Print()
    {

        cout << "matrix A :\n";

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                cout << A[i][j] << "    ";
            }
            cout << endl;
        }

        cout << "matrix B :\n";

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                cout << B[i][j] << "    ";
            }
            cout << endl;
        }
    }
    void Transpose()
    {

        cout << "Matrix A Transpose\n";

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                C[i][j] = A[i][j];
            }
        }

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                A[i][j] = C[j][i];
            }
        }

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                cout << A[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "Matrix B Transpose\n";
        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                B[i][j] = C[j][i];
            }
        }

        for (int i = 0; i < size; i++)
        { // rows

            for (int j = 0; j < size; j++)
            { // coulumn

                cout << B[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void symmetry()
    {

        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
            {

                if (A[i][j] == A[j][i])
                {
                    if (i == size - 1 &&j==size-1)
                    {

                        cout << "A is Symmetry\n";
                    }
                }
                else
                {

                    cout << "A not symmetry\n";

                    break;
                }
            }
            for (int j = 0; j < size; j++)
            {

                if (B[i][j] == B[j][i])
                {
                    if (i == size - 1 && j==size -1)
                    {

                        cout << "B is Symmetry\n";
                    }
                }

                else
                {

                    cout << "B not symmetry\n";

                    break;
                }
            }
        }
    }

    void multiplication()
    {

        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
            {

                for(int k=0;k<size;k++){

                C[i][j] += A[i][k] * B[k][i];
            }
        }
        }
        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
            {

                cout << C[i][j];
            }
        }
    }
};

int main()
{
    TwoDArray t;

choiceMenue:

    system("CLS");

    int choice;

    cout << "\nMAIN MENU\n"
         << "\nchoose from the below menue\n"
         << "1.   Initialize matrix\n"
         << "2.   Print Matrix\n"
         << "3.   Transpose Matrix\n"
         << "4.   Is Symmetry\n"
         << "5.   multiply matrix\n"
         << "6.   Exit\n"
         << "Enter your choice from 1 to 6\n";

    cin >> choice;

    switch (choice)
    {

    case 1:

        t.initialize();

        break;

    case 2:

        t.Print();

        break;

    case 3:

        t.Transpose();

        break;

    case 4:

        t.symmetry();

        break;

    case 5:

        t.multiplication();

        break;

    case 6:

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
}