#include<iostream>
using namespace std;
class Box{
	int length;
	public:
		void setlength(int l){
			length = l;
		}
		void showlength(){
			cout<<"Length: "<<length<<endl;
		}
};
int main(){
	Box b1;
	Box *ptr = &b1;
	ptr->setlength(15);
	ptr->showlength();
}
