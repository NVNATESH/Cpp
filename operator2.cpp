#include<iostream>
using namespace std;
class unary1
{
	int a,b;
	public:
		void getvalue()
		{
			cin>>a>>b;
		}
		void operator ++()
		{
			a=++a;
			b=++b;
		}
		void operator --()
		{
			a=--a;
			b=--b;
		}
		void display()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
	unary1 obj;
	obj.getvalue();
	++obj;
	obj.display();
	--obj;
	obj.display();
	
	
}
