#include <iostream>
using namespace std;
int main(){
	int a=12,*p,**q,***r;
	p=&a;
	q=&p;
	r=&q;
	cout<<"The value of a :"<<a<<endl;
	cout<<"Address of a :"<<&a<<endl;
	cout<<"The value of p :"<<p<<endl;
	cout<<"The value stored in p :"<<*p<<endl;
	cout<<"-------------------------------"<<endl;


	cout<<"The value of p :"<<p<<endl;
	cout<<"Address of p :"<<&p<<endl;
	cout<<"The value stored in p :"<<*p<<endl;
	cout<<"-------------------------------"<<endl;

	cout<<"The value of q :"<<q<<endl;
	cout<<"Address of q :"<<&q<<endl;
	cout<<"The value stored in q :"<<**q<<endl;
	cout<<"-------------------------------"<<endl;


	cout<<"The value of r :"<<r<<endl;
	cout<<"Address of r :"<<&r<<endl;
	cout<<"The value stored in r :"<<***r<<endl;
	
	return 0;
}