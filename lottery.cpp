#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int SIZE = 5;
    const int MAX_DIGIT = 10;

    int winningDigits[SIZE];
    int player[SIZE];
    int matches = 0;

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % MAX_DIGIT;
    }

    cout << "Enter five lottery digits (0 through 9), separated by spaces: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> player[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matches++;
        }
    }

    cout << "\nWinning digits: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << winningDigits[i] << " ";
    }

    cout << "\nPlayer digits:  ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << player[i] << " ";
    }

    cout << "\nTotal matches:  " << matches << endl;

    return 0;
}