#include <iostream>
using namespace std;
class base{
    private:
    int x;
    public:
    base(int a):x(a){cout<<"Hello"<<endl;}
    void print(){cout<<"The value of x : "<<x<<endl;}
};



int main(){
    base b(25);
    b.print();

	return 0;
}