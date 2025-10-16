#include<iostream>
using namespace std;
class parent
{
	public: void show()
	{
		cout<<"\nInside parent class-show() function";
	}
};
class child : public parent
{
	public: void show()
	{
		cout<<"\nInside child class-show() function";
	}
};
int main()
{
	parent p;
	p.show();
	child c;
	c.show();
	parent *ptr = &c;
	ptr->show();
	return 0;
}
