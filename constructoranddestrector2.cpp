#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		string name;
		student(string r){
			cout<<"constructor called"<<endl;
			name = r;
		}
		void show(){
			cout<<"Name is"<<name<<endl;
		}
		~student(){
			cout<<"destructor called"<<endl;
		}
};
int main(){
	student s1 =student("natesh");
	s1.show();
	return 0;
}
