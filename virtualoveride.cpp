#include <bits/stdc++.h>
using namespace std;

class employee {
    string first_name;
    string last_name;
public:
    employee(string f, string l) : first_name(f), last_name(l) {}

    string get_full_name() {
        return first_name + " " + last_name;
    }

    virtual void print_wage() {
        cout << "The employee wage is not yet decided" << endl;
    }

    virtual ~employee() {}
};

class dailywageemp : public employee {
    double dwage;
public:
    dailywageemp(string f, string l, double d) : employee(f, l), dwage(d) {}

    void print_wage() override {
        cout << "The daily wage of " << get_full_name() << " is " << dwage << endl;
    }
};

class monthlywageemp : public employee {
    double mwage;
public:
    monthlywageemp(string f, string l, double m) : employee(f, l), mwage(m) {}

    void print_wage() override {
        cout << "The monthly wage of " << get_full_name() << " is " << mwage << endl;
    }
};

int main() {
    vector<employee*> v {
        new monthlywageemp("Venkata", "Natesh", 75000),
        new dailywageemp("Ravi", "Kumar", 2000)
    };

    for (auto emp : v) {
        emp->print_wage();
    }

    // Clean up dynamically allocated memory
    for (auto emp : v) {
        delete emp;
    }

    return 0;
}
