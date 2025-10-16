#include<bits/stdc++.h>
using namespace std;
int number = 100;
void num(){
	int number = 50;
	cout<<"Local variable = "<<number<<endl;
	cout<<"Global variable = "<<::number<<endl;
}
int main(){
	num();
	return 0;
}
