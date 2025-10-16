#include<iostream>
using namespace std;
template <typename T1, typename T2>
class adder{
	private:
		T1 a;
		T2 b;
	public:
		adder(T1 x,T1 y){
			a = x;
			b = y;
		}
		auto max(){
			return a>b ? a:b;
		}
};
int main(){
	adder<int,int> obj1(10,20);
	cout<<"max of int + int = "<<obj1.max()<<endl;
	adder<int,float> obj2(5,2.5f);
	cout<<"max of int + float = "<<obj2.max()<<endl;
	adder<double,int> obj3(3.5,4);
	cout<<"max of double + int = "<<obj3.max()<<endl;
	return 0;
}
