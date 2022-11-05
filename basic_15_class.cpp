#include <iostream>
using namespace std;
class hello
{
private:
    int a=10,b=12;
public:
    hello(int x,int y){a=x;b=y;}/* parameterised constructor*/
    hello(){}/* non-parameterised constructor*/
    void sum(){
        cout<<"The sum is "<<a+b<<endl;
    }
    
};


int main(){
    hello h;
    h.sum();
    hello h1(25,35);
    h1.sum();
	return 0;
}