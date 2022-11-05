#include <iostream>
using namespace std;
class hello
{
private:
    int a=12,b=16;
public:
    int x=11,y=13;

   void print(){
    cout<<a+b<<endl;
   }
protected:
void sum(){
    cout<<a+b<<endl;
}
};


int main(){
    hello h;
    h.print();
    cout<<h.x+h.y;
	return 0;
}