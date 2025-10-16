#include<iostream>
using namespace std;
inline void square(int a){
	int square;
	square = a*a;
	cout << square;
}
int main(){
	int a;
	cout<<"Enter the number = ";
	cin>>a;
	square(a);
}
