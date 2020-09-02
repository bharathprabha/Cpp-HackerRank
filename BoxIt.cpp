#include <bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :
class Box
{
    int l, b, h;

public:
    Box()
    {
        l = b = h = 0;
    }
    Box(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    Box(Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    long long CalculateVolume()
    {
        long long volume = l;
        volume *= b;
        volume *= h;
        return volume;
    }
    bool operator<(Box &B)
    {
        if ((l < B.l) || (b < B.b && l == B.l) || (h < B.h && l == B.l && b == B.b))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &out, const Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

//ostream& operator<<(ostream& out, Box& B)

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}

/*
1039 3749 8473
-1355615565
Greater
Lesser
4839 283 273
373856301


1039 3749 8473
33004122803
Greater
Lesser
4839 283 273
373856301
*/
