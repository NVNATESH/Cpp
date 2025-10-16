#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void makesound(){
			cout<<"Animal make a sound"<<endl;
		}
};
class Dog: public Animal{
	public:
		void makesound() override{
			cout<<"Woof!"<<endl;
		}
};
class Cat : public Animal{
	public:
		void makesound() override{
			cout<<"Meow!"<<endl;
		}
};
int main(){
	Animal* myAnimal;
	Dog mydog;
	Cat mycat;
	myAnimal = &mydog;
	myAnimal->makesound();
	myAnimal = &mycat;
	myAnimal->makesound();
	return 0;
}
