#include<iostream>
using namespace std;
template<class T>
T maxi(T a,T b)
{
	return a>b ? a:b;
}
int main()
{
	cout<<"for integers numbers "<<maxi(3,5)<<endl;
	cout<<"for float numbers "<<maxi(3.5,2.5)<<endl;
	cout<<"for character"<<maxi('a','z')<<endl;
	return 0;
}
