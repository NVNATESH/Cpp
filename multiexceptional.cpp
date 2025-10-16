#include<iostream>
using namespace std;
void num(int x){
	try{
		if(x==0){
			throw 5;
		}
		else if(x==1){
			throw 's';
		}
		else if(x<0){
			throw 5.4;
		}
		else {
			throw "error";
		}
	}
	catch(int a){
		cout<<"integer value"<<endl;
	}
	catch(char ch){
		cout<<"Character value"<<endl;
	}
	catch(double b){
		cout<<"Float value"<<endl;
	}
	catch(...){
		cout<<"Exception handling"<<endl;
	}
}
int main(){
	num(0);
	num(1);
	num(-6);
	num(10);
	return 0;
}
