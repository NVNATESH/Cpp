#include<iostream>
#include<string>
using namespace std;

class employee {
public:
    int salary;
    int id;
    string name;
    employee(int emp_id, string emp_name, int emp_salary) {
        id = emp_id;
        name = emp_name;
        salary = emp_salary;
    }
    void display() {
        cout << "Emp_id: " << id << "\nName: " << name << "\nSalary: " << salary << endl;
    }
};
int main() {
    int n;
    cout << "No of employees: ";
    cin >> n;
    employee s[n];
    int maxsalary = 0,id, salary;
    string name;
    for(int i = 0; i < n; i++) {
        cout << "Enter employee_id, name and salary: ";
        cin>>id>>name>>salary;
        s[i] = employee(id,name,salary);
        if(s[i].salary > maxsalary) {
            maxsalary = s[i].salary;
            maxIndex = i;
        }
    }
    cout << "\nEmployee with max salary:\n";
    s[maxIndex]->display();
    return 0;
}
