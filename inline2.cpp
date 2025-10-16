#include<iostream>
using namespace std;
inline void  add(int a,int b){
	cout<<"the sum int numbers is"<<a+b<<endl;
}
inline void add(float a,float b){
	cout<<"the sum of float numbers is"<<a+b<<endl;
}
inline void add(double a,double b){
	cout<<"the sum of double numbers is"<<a+b<<endl;
}
int main(){
	add(2,3);
	add(float(2.2),float(3.4));
	add(2.225,3.445);
	add(2.2656,3.45445);
	add(2.248296296419,3.44864488661);
}
