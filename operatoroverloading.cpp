#include<iostream>
using namespace std;
class demo{
	int n;
	public:
		demo(int x){
			n = x;
		}
	demo operator -(){
		return demo(-n);
	}
	void display(){
		cout<<"Value : "<<n<<endl;
	}
};
int main(){
	demo obj1(5),obj2 = -obj1;
	cout<<"Original Object: ";
	obj1.display();
	cout<<"After applying unary minus: ";
	obj2.display();
	return 0;
}
