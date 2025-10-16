#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	cout<<"Enter the a,b : ";
	cin>>a>>b;
	cout<<"Sum of a+b = "<<add(a,b)<<endl;
	return 0;
}
