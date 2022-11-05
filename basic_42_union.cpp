#include <iostream>
using namespace std;
union data{
char a;
int b;
};
int main(){
    data A,B;
    A.b=65;
    B.a='B';
    B.b=67;
    cout<<A.a<<"\t"<<A.b<<endl;
    cout<<B.a<<"\t"<<B.b<<endl;

	return 0;
}