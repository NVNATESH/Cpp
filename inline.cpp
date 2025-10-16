#include<iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}
inline int add(int a,int b,int c){
	return a+b+c;
}
int main() {
    int result1 = add(5, 3);
    int result2 = add(5,3,2);
    cout<<result1<<result2<<endl;
}
