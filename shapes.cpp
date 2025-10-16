#include<iostream>
using namespace std;
class shape
{
	public:
		shape()=default;
		virtual double get_area()const
		{
			return 0.0;
		}
		~shape()=default;
		
};
class square:public shape
{
	private:
		double *length;
		public:
			square(double len=1.0):length(new double{len}){
        }
        double get_area() const override
        {
        	return *length * * length;
		}
		~square()
		{
			delete length;
		}
};
int main()
{
	square *shape1=new square(2.5);
	cout<<"The area of shape1 is :"<<shape1->get_area()<<endl;
	delete shape1;
	shape *shape2=new square(3.5);
	cout<<"The area of shape 2 is"<<shape2->get_area()<<endl;
	delete shape2;
	return 0;
}
