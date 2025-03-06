#include <iostream>
using namespace std;

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "********************" << endl;
    cout << "Guest Number Game in C++\n";

    do
    {
        cout << "Enter a guess number from (1-100):";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too High!\n";
        }
        else if (guess < num)
        {
            cout << "Too Low!\n";
        }
        else
            cout << "Congrats you Guest the number!! Number of tries: " << tries << '\n';
        ;

    } while (guess != num);

    cout << "********************" << endl;

    return 0;
}
