#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw(){
			cout<<"Drawing Shape"<<endl;
		}
};
class circle : public shape{
	public:
		void draw(){
			cout<<"Drawing Circle"<<endl;
		}
};
class square : public shape{
	public:
		void draw(){
			cout<<"Drawing Square"<<endl;
		}
};
int main(){
	shape* shapeptr;
	circle c;
	square s;
	shapeptr = &c;
	shapeptr->draw();
	shapeptr = &s;
	shapeptr->draw();
	return 0;
}
