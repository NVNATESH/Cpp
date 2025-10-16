#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()
	{
		cout<<"In base class"<<endl;;
	}
};
class derived1 : public base
{
	public:
		void display()
		{
			cout<<"In derived1 class"<<endl;
		}
};
class derived2 : public base
{
	public:
		void display()
		{
			cout<<"In derived2 class"<<endl;
		}
};
int main()
{
	base ob;
	base *ptr;
	ob.display();
	ptr=&ob;
	ptr->display();
	derived1 d1;
	derived2 d2;
	ptr=&d1;
	ptr->display();
	ptr=&d2;
	ptr->display();
	
}
