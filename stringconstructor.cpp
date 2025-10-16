#include<bits/stdc++.h>
using namespace std;
class student{
	public :
		string name1,rollno1;
		student(string a,string b){
			name1 = a;
			rollno1 = b;
		}
		void show(){
			cout<<"Name is : "<<name1<<"\nRoll no is: "<<rollno1<<endl;
		}
};
int main(){
	string a,b;
	cout<<"Enter the name:";
	getline(cin,a);
	cout<<"Enter the Roll No:";
	getline(cin,b);
	student s1(a,b);
	s1.show();
	return 0;
}
