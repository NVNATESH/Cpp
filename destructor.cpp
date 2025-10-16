#include<iostream>
using namespace std;
int count = 0;
class sample{
	public:
		sample(){
			count = count + 1;
			cout<<"construction is created"<<count<<endl;
		}
		~sample(){
			cout<<"Destructor is called"<<count<<endl;
			count--;
		}
};
int main(){
	sample s,s1,s2,s3;
	return 0;
}
