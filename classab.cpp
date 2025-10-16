#include<iostream>
using namespace std;
class B;
class A {
private:
    int a = 10;

public:
    friend int add(A objA, B objB);
};
class B {
private:
    int b = 10;
public:
    friend int add(A objA, B objB);
};
int add(A objA, B objB) {
    return objA.a + objB.b;
}
int main() {
    A objA;
    B objB;
    cout << "Sum: " << add(objA, objB) << endl;
    return 0;
}
