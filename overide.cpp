#include<iostream>
using namespace std;
class person{
	public:
		void show(){
			cout<<"I am a Person"<<endl;
		}
};
class Derived1 : public Base{
	public:
		void display() override{
			cout<<"Display from Derived1 class"<<endl;
		}
};
class Derived2 : public Base{
	public:
		void display() override{
			cout<<"Display from Derived2 class"<<endl;
		}
};
