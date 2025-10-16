#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,x1,x2,des,real,imag;
	cin>>a>>b>>c;
	des = b*b - 4*a*c;
	if(des>0){
		x1 = (-b - (sqrt(des)))/(2*a);
		x2 = (-b + (sqrt(des)))/(2*a);
		cout<<"roots are real and different: "<<endl;
		cout<<"x1 ="<<x1<<endl;
		cout<<"x2 ="<<x2<<endl;
	}
	else if(des==0){
		x1 = -b/(2*a);
		cout<<"roots are real and equal:"<<endl;
		cout<<"x1 = X2 = "<<x1<<endl;
	}
	else{
		cout<<"roots are complex"<<endl;
		real = -b/(2*a);
		imag = sqrt(des)/(2*a);
		cout<<"x1 = "<<real<<"+"<<"i"<<imag<<endl;
		cout<<"x2 = "<<real<<"-"<<"i"<<imag<<endl;
	}
}
