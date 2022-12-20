#include <iostream>
using namespace std;

class C{
    public:
    int real,img;
    C(){real=0,img=0;}
    C(int r,int i){ real=r,img=i;}

    void disp(){
        cout<<real<<" + "<<img<<" i"<<endl;
    }
/*

clame operator->keyword Operator_Symbol (argument list)
{ \\ Function body }

ssna
*/
    C operator + (C c){
        C temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

};
int main(){
    //hello

C a(11,21);
C b(11,13);
C d;
d=a+b;
d.disp();

	return 0;
}