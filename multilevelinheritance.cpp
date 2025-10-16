#include<iostream>
using namespace std;
class grandfather
{
	public:
		void g()
		{
			cout<<"this is grandfather class"<<endl;
		}
};
class father:public grandfather
{
	public:
		void f()
		{
			cout<<"This is father class"<<endl;
		}
};
class child:public father
{
	public:
		void c()
		{
			cout<<"This is child class"<<endl;
		}
};
int main()
{
	child c1;
	c1.g();
	c1.f();
	c1.c();
	return 0;
}
