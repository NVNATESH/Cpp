#include<iostream>
using namespace std;
class  vehicle
{
	public:
		vehicle()
		{
			cout<<"This is vehicle"<<endl;
		}
};
class car:public vehicle
{
	public:
		car()
		{
			cout<<"This is a 4-wheeler"<<endl;
		}
};
class sports
{
	public:
		sports()
		{
			cout<<"It is of sports category"<<endl;
		}
};
class Bmw: public car,public sports
{
	public:
		Bmw()
		{
			cout<<"Bmw is a sports car\n"<<endl;
		}
};
int main()
{
	Bmw obj1;
}
