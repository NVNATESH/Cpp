#include<iostream>
using namespace std;
class complex{
	int real,imag;
	public:
		complex(int r=0 ,int i=0){
			real = r;
			imag = i;
		}
		complex operator+(const complex &c){
			complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
		void display(){
			cout<<real<<" + "<<imag<<" i "<<endl;
		}
};
int main(){
	complex c1(3.5,2.5);
	complex c2(1.6,4.1);
	complex c3 = c1+c2;
	cout<<"First Complex Number: ";
	c1.display();
	cout<<"Second Complex Number: ";
	c2.display();
	cout<<"sum:"; c3.display(); return 0;
}
