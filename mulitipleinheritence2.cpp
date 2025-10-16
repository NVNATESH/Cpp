#include <iostream>
using namespace std;
class  A {
public:
    void showA() {
        cout << "Class A method called." << endl;
    }
};
class B {
public:
    void showB() {
        cout << "Class B method called." << endl;
    }
};
class C : public A, public B {
public:
    void showC() {
        cout << "Class C method called." << endl;
    }
};
int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}
