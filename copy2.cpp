#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
    Point(Point &p) {
        x = p.x;
        y = p.y;
    }
    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};
int main() {
    Point p1(10, 20);
    Point p2 = p1;
    p1.display();
    p2.display();

    return 0;
}
