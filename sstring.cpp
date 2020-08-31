#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string_one, string_two;
    cin >> string_one >> string_two;
    cout << string_one.size() <<" "<< string_two.size() << endl;
    cout << string_one + string_two << endl;
    char temp;
    temp = string_one[0];
    string_one[0] = string_two[0];
    string_two[0] = temp;
    cout << string_one << " " << string_two << endl;
    return 0;
}