#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int roll;
		student(int r){
			cout<<"constructor called"<<endl;
			roll = r;
		}
		void show(){
			cout<<"Roll no is"<<roll<<endl;
		}
		~student(){
			cout<<"destructor called"<<endl;
		}
};
int main(){
	student s1 =student(310);
	s1.show();
	return 0;
}
