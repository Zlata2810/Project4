#include <iostream>
using namespace std;

int main()
{
    const int rows = 10;
    const int seats = 20;
    int cinema[rows][seats];

    srand(time(0));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < seats; j++)
        {
            cinema[i][j] = rand() % 2;
        }
    }
    cout << "Cinema hall:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < seats; j++)
        {
            cout << cinema[i][j] << " ";
        }

        cout << endl;
    }

 
    cout << "Rows where all seats are sold:" << endl;

    for (int i = 0; i < rows; i++)
    {
        bool allSold = true;

        for (int j = 0; j < seats; j++)
        {
            if (cinema[i][j] == 0)
            {
                allSold = false;
                break;
            }
        }

        if (allSold)
        {
            cout << "Row " << i + 1 << endl;
        }
    }

    
}