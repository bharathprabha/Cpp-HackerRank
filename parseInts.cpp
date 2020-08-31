#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result_int;
    stringstream ss(str);
    char ch;
    int tmp;

    while (ss >> tmp)
    {
        result_int.push_back(tmp);
        ss >> ch;
    }

    return result_int;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}