#include<iostream>
using namespace std;
inline void msg(){
	cout << "This Sentence is Written in inline";
}
inline int add(int a, int b) {
    return a + b;
}
inline int add(int a,int b,int c){
	return a+b+c;
}
int main(){
	int result1 = add(5, 3);
    int result2 = add(5,3,2);
    cout<<"add = "<<result1<<"\nadd = "<<result2<<endl;
	msg();
}
