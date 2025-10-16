#include<iostream>
using namespace std;
template<typename T>
class display1
{
	T a;
	public:
		display1(T data)
		{
			a=data;
		}
		void show()
		{
			cout<<a<<endl;
		}
};
int main()
{
	display1<int> o1(6);
	display1<float> o2(6.1);
	o1.show();
	o2.show();
	return 0;
}
