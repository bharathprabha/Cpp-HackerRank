#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;

    cin >> a;
    cin >> b;

    char words[10][20] = {
        "greater than 9",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"

    };
    for (int i = a; i <= b; i++)
    {
        if (i > 9 && i % 2 == 0)
            cout << "even" << endl;
        else if (i > 9 && i % 2 != 0)
            cout << "odd" << endl;
        else
            cout << words[i] << endl;
    }

    // Complete the code.
    return 0;
}