#include<bits/stdc++.h>
using namespace std;
class student{
	private :
		int fee = 65000;
	public :
		string name[50];
		int stu_id;
		int pay = fee;
		void disp(string name,int stu_id,string branch="CSE"){
			cout<<"student Regd Number: "<<stu_id<<endl;
			cout<<"student Name: "<<name<<endl;
			cout<<"student fee: "<<pay<<endl;
			cout<<"student Branch: "<<branch<<endl;
		}
};
int main(){
	student e1;
	e1.disp("Natesh",310);
}
