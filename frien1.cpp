#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int breadth;
public:
    Box() {
        length = 10;
        breadth = 20;
    }
    friend void area(Box b);
};
void area(Box b) {
    cout << "Area : " << b.length * b.breadth << endl;
}
int main() {
    Box b1;
    area(b1);
    return 0;
}
