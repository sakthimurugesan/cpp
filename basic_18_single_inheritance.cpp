#include <iostream>
using namespace std;
class a{
    public:

int x=12,y=24;
void sum(){
    cout<<"x + y = "<<x+y;
}
};

class b: public a{
    public:
b(){
    cout<<"b class obj created"<<endl;
}
};

int main(){
   b o1;
   o1.sum();
	return 0;
}

