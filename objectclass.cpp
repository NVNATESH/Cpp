#include<iostream>
using namespace std;
class address{
	string city;
	public:
		address(string c){
			city = c;
		}
		void show(){
			cout<<"City: "<<city<<endl;
		}
};
class student{
	string name;
	address addr;
	public:
		student(string n,string c) : name(n),addr(c) {}
		void display(){
			cout<<"Name: "<<name<<endl;
			addr.show();
		}
};
int main(){
	student s("Venkata","Kadapa");
	s.display();
	return 0;
}
