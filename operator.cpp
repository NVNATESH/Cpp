#include<iostream>
using namespace std;
class unary{
	int x,y,z;
	public:
		unary(){
			x = 0;
			y=0;
			z=0;
		}
		unary(int a,int b,int c){
			x =a;
			y =b;
			z =c;
		}
		void display(){
			cout<< x <<endl<< y <<endl<< z<<endl;
		}
		void operator ++();
};
void unary::operator ++(){
	x = -x;
	y = -y;
	z = -z;
	cout<<"Operator Overloading Completed"<<endl;
}
int main(){
	unary un1(10,-40,70);
	unary un2(20,-60,50);
	un1.display();
	un2.display();
	++un2;
	un1.display();
	return 0;
}
