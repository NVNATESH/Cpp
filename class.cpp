#include<iostream>
#include<cstring>
using namespace std;
class student{
	public:
		int sno;
		char sname[20],branch[20];
		void disp(){
			cout<<"Student Regd Number: "<<sno<<endl;
			cout<<"Student Name: "<<sname<<endl;
			cout<<"Student Branch: "<<branch<<endl;
		}
};
int main(){
	student s1;
	s1.sno = 310;
	strcpy(s1.sname,"Natesh");
	strcpy(s1.branch,"CSE");
	s1.disp();
}
