#include<iostream>
using namespace std;
class animal{
	public:
		void eat(){
			cout<<"Eats everyday"<<endl;
		}
		void sleep(){
			cout<<"Sleeps everyday"<<endl;
		}
};
class dog : public animal{
	public:
	void bark(){
		cout<<"the sound of dog is bow..bow"<<endl;
	}
};
int main(){
	dog d;
	d.eat();
	d.sleep();
	d.bark();
	return 0;
}
