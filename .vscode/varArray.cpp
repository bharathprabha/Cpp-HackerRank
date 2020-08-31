#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array_no, q, array_elem_size, i, j;
    cin >> array_no >> q;
    vector<vector<int>> arr(array_no);
    for (i = 0; i < array_no; ++i)
    {
        cin >> array_elem_size;
        arr[i].resize(array_elem_size);
        for (j = 0; j < array_elem_size; ++j)
        {
            cin >> arr[i][j];
        }
    }
    for (int l = 0; l < q; ++l)
    {
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    return 0;
}