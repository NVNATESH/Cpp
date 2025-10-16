#include<iostream>
#include<string>
using namespace std;
class Student{
int rollNo;
string name;
public: void getdata(){
	cout<<"Enter Roll No and Name";
	cin>> rollNo>> name;
}
void display(){
	cout<< "Roll No:" << rollNo << ", Name:" << name <<endl;
}
};
int main(){
	Student s[3];
	int i;
	for(i=0;i<3;i++){
		s[i].getdata();
	}
	cout<<"Student Details:"<<endl;
	for(i=0;i<3;i++){
		s[i].display();
	}
	return 0;
}
