#include<iostream>
using namespace std;
class number{
	int value;
	public:
	number(int v){
		value = v;
	}
	number operator -(){
		return number(-value);
	}
	void display(){
		cout<<"value = " << value <<endl;
	}
};
int main(){
	number n1(50);
	number n2 = -n1;
	cout<<"Original object: ";
	n1.display();
	cout<<"After applying unary minus: ";
	n2.display();
	return 0;
}
