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
    // For Loop
    for (int i = 0; i <= 18; i += 2)
    {
        if (i == 10 || i == 12)
        {
            continue;
        }
        cout << i << endl;
    }
    //While Loop
    cout << "============\n";
    int i = 0;
    while (i <= 8)
    {
        cout << i << endl;
        i += 2;
    }
    int x = 14;
    while (x <= 18)
    {
        cout << x << endl;
        x += 2;
    }
    return 0;
}