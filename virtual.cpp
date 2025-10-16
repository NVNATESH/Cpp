#include<iostream>
using namespace std;
class person{
	public:
		void show(){
			cout<<"I am a Person"<<endl;
		}
};
class student : virtual public person{
	public:
		void studentInfo(){
			cout<<"I am a Student"<<endl;
		}
};
class teacher : virtual public person{
	public:
		void teacherInfo(){
			cout<<"I am a Teacher"<<endl;
		}
};
class TA : public student,public teacher{
	public:
		void display(){
			show();
		}
};
int main(){
	TA obj;
	obj.display();
	obj.studentInfo();
	obj.teacherInfo();
	return 0;
}
