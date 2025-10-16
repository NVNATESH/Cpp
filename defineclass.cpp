#include<iostream>
using namespace std;
class MyClass{
	public:
		void show();
};
void MyClass::show(){
	cout <<"Inside show()";
}
int main(){
	MyClass obj;
	obj.show();
	return 0;
}
