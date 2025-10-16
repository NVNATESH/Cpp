#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int roll;
		student(int r){
			roll = r;
		}
		void show(){
			cout<<"Roll no is"<<roll<<endl;
		}
};
int main(){
	int r;
	cin>>r;
	student s1 =student(r);
	s1.show();
	return 0;
}
