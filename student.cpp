#include <iostream>
using namespace std;
class student{
	int rno,sollno;
	string sname,name;
	cout<<"enter the roll no";
	cin>>rollno;
	cout<<"enter the name"
	cin>>name;
	Student(){
		rno = rollno;
		sname  = name;
	}
	void show(){
		cout<<rno<<endl;
		cout<<sname<<endl;
	}
};
int main(){
	Student s1;
	s1.show();
	return 0;
}
