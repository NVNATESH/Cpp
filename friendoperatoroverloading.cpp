#include<iostream>
using namespace std;
class Number{
	public:
		int value;
	Number(int v =0) : value(v){}
	friend Number operator++(Number &n);
	friend Number operator+(Number n1,Number n2);
	void display(){
		cout<<"Value : "<<value<<endl;
	}
};
//
Number operator++(Number &n){
	n.value++;
	return n;
}
Number operator+(Number n1,Number n2){
	return Number(n1.value+n2.value);
}
int main(){
	Number n1(5),n2(10),n3;
	cout<<"Before Unary Operation: "<<endl;
	n1.display();
	++n1;
	cout<<"After Unary Operation (++n1):"<<endl;
	n1.display();
	n3 = n1 + n2;
	cout<<"After Binary Operation (n1+n2): "<<endl;
	n3.display();
	return 0;
}
