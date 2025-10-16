#include<iostream>
using namespace std;
class demo{
	int n;
	public:
		demo(int x){
			n = x;
		}
	demo operator ++(){
		return demo(++n);
	}
	demo operator ++(int){
		return demo(n++);
	}
	void display(){
		cout<<"Value : "<<n<<endl;
	}
};
int main(){
	demo obj1(5);
	cout<<"Original Object: ";
	obj1.display();
	demo obj3 = ++obj1;
	demo obj2 = obj1++;
	demo obj4 = obj1;
	cout<<"After applying unary minus: ";
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	return 0;
}
