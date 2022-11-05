#include <iostream>
using namespace std;
class A{
	private:
	int x,y;
	public:
	friend void setdata();
};

void setdata(){
	A o;
	o.x=10;
	o.y=20;
	cout<<"X"<<"\t"<<o.x<<endl;
	cout<<"Y"<<"\t"<<o.y<<endl;
}

int main(){
	A o;
	setdata();
	return 0;
}