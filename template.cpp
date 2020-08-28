#include <iostream>
using namespace std;
template <class T>
T large(T n, T m)
{
    return (n > m) ? n : m;
}
template <class T>
void swapTwo(T &n, T &m)
{
    n = n + m;
    m = n - m;
    n = n - m;
}

int main()
{
    int i, j;
    // float a, b;
    // char c, d;
    cout << "Enter two integer";
    cin >> i >> j;
    cout << &i << endl
         << &j << endl;
    swapTwo(i, j);
    cout << i << j;
    cout << large(i, j);
}