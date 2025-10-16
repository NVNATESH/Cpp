#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Natesh", 19);
    Person p2 = p1;
    p1.display();
    p2.display();
    return 0;
}
