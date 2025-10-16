#include <bits/stdc++.h>
using namespace std;
class A{
	public:
		void Natesh() {
			cout <<"A" <<endl;
			
		}
};
class B: public A{};

class C: public A{};
class D: public B,public C {};	
int main() {
	D d;
	d.B::Natesh();
	d.C::Natesh();
	return 0;
}
