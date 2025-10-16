#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int roll;
		student(){
			roll = 0;
		}
		student(int r){
			roll = r;
		}
		void display(){
			cout<<roll<<endl;
		}
};
int main(){
	int r;
	cin>>r;
	student s,s1(r);
	s.display();
	s1.display();
}
