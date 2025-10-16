#include<bits/stdc++.h>
using namespace std;
class add{
	public:
		int a,b,sum;
		add(int a,int b){
			this->a = a;
			this->b = b;
			this->sum = a+b;
		}
		void display(){
			cout<<"The sum is "<<sum<<endl;
			this->sum = this->sum+1;
			cout<<"The sum is "<<sum<<endl;
		}
};
int main(){
	add s(2,5);
	s.display();
	return 0;
}
