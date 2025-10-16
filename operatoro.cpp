#include<iostream>
using namespace std;
class complex{
	double real,imag;
	public:
		complex(double r=0 ,double	 i=0){
			real = r;
			imag = i;
		}
		friend complex operator+(complex c1,complex c2);
		void display(){
			cout<<real<<" + "<<imag<<" i "<<endl;
		}
};
complex operator+(complex c1,complex c2){
			complex temp;
			temp.real = c1.real + c2.real;
			temp.imag = c1.imag + c2.imag;
			return temp;
		}
int main(){
	complex c1(3.5,2.5);
	complex c2(1.6,4.1);
	complex c3 = c1+c2;
	cout<<"First Complex Number: ";
	c1.display();
	cout<<"Second Complex Number: ";
	c2.display();
	cout<<"sum using friend function: "; c3.display(); return 0;
}
