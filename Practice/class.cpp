#include <bits/stdc++.h>

using namespace std;

class A {
   public:
    int data = 5;
};

class B : public A {
    int data2;

   public:
    B(int b) {
        data2 = b;
    }
    void show() {
        cout << data2 << " " << data;
    }
};

int32_t main() {
    cout << " ";
    B obj(3);
    obj.show();
    return 0;
}