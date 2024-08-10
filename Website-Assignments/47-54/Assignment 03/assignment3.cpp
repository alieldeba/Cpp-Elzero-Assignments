/*
    - Made by Mohamed BOUHADI
    - GitHub Account : https://github.com/bouhadi-m3d
    - X account : https://x.com/ChrolloM3d
    - Discord username : chrollo_m3d
*/
#include <iostream>
using namespace std;

int main()
{

    int number_one, number_two;

    cout << "== Enter the start and the end of the range: ==\n";
    cout << "Number One: ";
    cin >> number_one;
    cout << "Number Two: ";
    cin >> number_two;

    if (number_one > number_two)
    {
        int x = number_one;
        number_one = number_two;

        number_two = x;
    }

    number_one++;

    for (int i = number_one; i < number_two; i++)
    {

        if (i % 2 == 0)
            continue;

        if (i == number_one || i == number_one + 1)
        {
            cout << i;
            continue;
        }

        cout << ", " << i;
    }

    cout << '\n';

    return 0;
}