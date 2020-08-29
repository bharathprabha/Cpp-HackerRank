#include <iostream>
#include <stdio.h>

using namespace std;

void changeNumber(int &number)
{

    cout << "before change " << number << endl;
    number = 10;
    cout << "after change " << number << endl;
}

int main()
{
    int num = 5;
    cout << "before function " << num << endl;
    changeNumber(num);
    cout << "after function " << num << endl;
}