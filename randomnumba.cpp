#include <iostream>
#include <random>
using namespace std;
int main()
{

    const int LOWER_LIMIT = 1;
    const int UPPER_LIMIT = 100;

    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<int> distribution(LOWER_LIMIT, UPPER_LIMIT);
    int target = distribution(generator);

    int guess;
    int guessCount = 0;

    cout << "This isthe Number Guessing Game!" << endl;
    cout << "Guess the number between "
         << LOWER_LIMIT << " and " << UPPER_LIMIT << "." << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        guessCount++;
        if (guess > target)
        {
            cout << "Too high, try again." << endl;
        }
        else if (guess < target)
        {
            cout << "Too low, try again." << endl;
        }
        else
        {
            cout << "Congratulations that is the number!"
                 << endl;
        }

    } while (guess != target);
    cout << "\nYou guessed the number in "
         << guessCount << " guesses!" << endl;

    return 0;
}
