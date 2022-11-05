#include <iostream>
using namespace std;
class base{
    private:
    const int x;
    public:
    base(int a):x(a){
        cout<<"hello"<<endl;
    }
    void print(){cout<<"The value of x : "<<x<<endl;}
};





int main(){
    base b(25);
    b.print();
 
	return 0;
}