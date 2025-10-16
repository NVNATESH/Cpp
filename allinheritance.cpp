#include<iostream>
using namespace std;
//SINGLE INHERITENCE
class A{
	public:
		void displayA(){
			cout<<"This is class A(Base Class - Single Inheritance)" <<endl;
		}
};
class B : public A{
	public:
		void displayB(){
			cout<<"This is class B(Derived from A- Single Inheritence)"<<endl;
		}
};
//MULTIPLE INHERITENCE
class X{
	public:
		void displayX(){
			cout<<"This is class X(Base Class for Mutiple Inheritence)"<<endl;
		}
};
class Y{
	public:
		void displayY(){
			cout<<"This is class Y(Base class for Multiple Inheritence)"<<endl;
		}
};
class Z : public X,public Y{
	public:
		void displayZ(){
			cout<<"This is class Z(Derived from X and Y- Multiple Inheritence)"<<endl;
		}
};
//MULTI LEVEL INHERITENCE
class Parent{
	public:
		void displayParent(){
			cout<<"This is Parent Class (Multi-level Inheritence)"<<endl;
		}
};
class Child: public Parent{
	public:
		void displayChild(){
			cout<<"This is Child Class (Derived from Parent)"<<endl;
		}
};
class GrandChild: public Child{
	public:
		void displayGrandChild(){
			cout<<"This is GrandChild Class (Derived from Child - Multilevel)"<<endl;
		}
};
//Hierarchical Inheritence
class Base{
	public:
		void displayBase(){
			cout<<"This is Base Class(Hierarchical Inheritence)"<<endl;
		}
};
class Derived1 : public Base{
	public:
		void displayDeriverd1(){
			cout<<"This is Derived1 (from Base) "<<endl;
		}
};
class Derived2 : public Base{
	public:
		void displayDeriverd2(){
			cout<<"This is Derived2 (from Base) "<<endl;
		}
};
//Hybrid Inheritence
class M{
	public:
		void displayM(){
			cout<<"This is class M (Base of Hybrid Inheritence)"<<endl;
		}
};
class N : public M{
	public:
		void displayN(){
			cout<<"This is clas N (Derived from M)"<<endl;
		}
};
class O{
	public:
		void displayO(){
			cout<<"This is class 0 (Independent Base for Hybrid Inheritence) "<<endl;
		}
};
class P : public N,public O{
	public:
		void displayP(){
			cout<<"This is class P (Derived from both N and O - Hybrid)" <<endl;
		}
};
int main(){
	cout<< "---Single Inheritence---" <<endl;
	B b;
	b.displayA();
	b.displayB();
	cout<< "---Multiple Inheritence---" <<endl;
	Z z;
	z.displayX();
	z.displayY();
	z.displayZ();
	cout<< "---Multilevel Inheritence---"<<endl;
	GrandChild gc;
	gc.displayParent();
	gc.displayChild();
	gc.displayGrandChild();
	cout<< "---Hierarchical Inheritence---"<<endl;
	Derived1 d1;
	Derived2 d2;
	d1.displayBase();
	d1.displayDeriverd1();
	d2.displayBase();
	d2.displayDeriverd2();
	cout<<"---Hybrid Inheritence---"<<endl;
	P p;
	p.displayM();
	p.displayN();
	p.displayO();
	p.displayP();
	return 0;
}
