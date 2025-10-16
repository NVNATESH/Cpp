#include <iostream>
using namespace std;

class A {
    static int s;   
public:
    static void display() {
        s++;               
        cout << s << endl;
    }
};
int A::s = 100;

int main() {
    A obj1, obj2, obj3;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
