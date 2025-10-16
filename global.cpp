#include<iostream>
using namespace std;
int x = 100;
void test(){
	int x = 50;
	cout <<"x is local variable "<<x<<endl;
	cout <<"x is global variable "<<::x<<endl;
}
int main(){
	test();
	return 0;
}
