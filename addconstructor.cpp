#include<bits/stdc++.h>
using namespace std;
class add{
	public :
		int num1,num2;
		add(int a,int b){
			num1 = a;
			num2 = b;
		}
		void show(){
			cout<<"sum = "<<(num1+num2)<<endl;
		}
};
int main(){
	int a,b;
	cout<<"Enter the two numbers";
	cin>>a>>b;
	add s1 = add(a,b);
	s1.show();
	return 0;
}
