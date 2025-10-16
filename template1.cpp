#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<"for integers numbers "<<add<int>(3,5)<<endl;
	cout<<"for float numbers "<<add(3.5,2.5);
	return 0;
}
