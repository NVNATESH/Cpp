#include<iostream>
using namespace std;
class number
{
	public:int value;
	number(int v = 0) : value(v) {	}
	void operator++()
	{
		++value;
	}
	number operator+(number obj)
	{
		number temp;
		temp.value=value+obj.value;
	}
	void display(){
		cout<<"value: "<<value<<endl;
	}
};
int main(){
	number n1(5),n2(10),n3;
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
