#include <bits/stdc++.h>
using namespace std;
string value = "natesh";
    void showValues() {
        int value = "venkata";
        cout << "Local value: " << value <<endl;
        cout << "Global value: " << ::value <<endl;
    }

int main() {
    DemoNamespace::showValues();
    return 0;
}
