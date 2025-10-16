#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle() {
        width = 0;
        height = 0;
    }
    Rectangle(int side) {
        width = side;
        height = side;
    }
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height
             << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
