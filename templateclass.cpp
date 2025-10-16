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
		auto add(){
			return a+b;
		}
};
int main(){
	adder<int,int> obj1(10,20);
	cout<<"Addition of int + int = "<<obj1.add()<<endl;
	adder<int,float> obj2(5,2.5f);
	cout<<"Addition of int + float = "<<obj2.add()<<endl;
	adder<double,int> obj3(3.5,4);
	cout<<"Addition of double + int = "<<obj3.add()<<endl;
	return 0;
}
