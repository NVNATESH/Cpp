#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout<<"Enter the two numbers";
    cin >> x >> y;
    int res = x-y;
    try {
        if (res == 0)
            throw 0;
        cout << "Result is " << x / res;
    }
    catch (int x) {
        cout << "Division with 0";
    }
    return 0;
}
