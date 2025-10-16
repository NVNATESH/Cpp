#include<bits/stdc++.h>
using namespace std;
class employee{
	private :
		int salary = 65000;
	public :
		string name[50];
		int emp_id;
		int pay = salary;
		void disp(string name,int emp_id,string branch="CSE"){
			cout<<"employee Regd Number: "<<emp_id<<endl;
			cout<<"employee Name: "<<name<<endl;
			cout<<"employee Salary: "<<pay<<endl;
			cout<<"employee Branch: "<<branch<<endl;
		}
};
int main(){
	employee e1;
	e1.disp("Natesh",310);
}
