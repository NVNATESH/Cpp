#include <iostream>
using namespace std;
class Number {
    int num;
public:
    Number(int n) : num(n) {}
    friend void showNumber(Number n);
};
void showNumber(Number n) {
    cout << "Number is: " << n.num << endl;
}
int main() {
    Number obj(42);
    showNumber(obj);
    return 0;
}
