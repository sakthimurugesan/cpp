#include <iostream>
using namespace std;
union data{
char a;
int b;
float c=(float)a;
};
int main(){
    data A,B;
    A.b=65;
    B.a='B';
    B.b=69;
    cout<<A.a<<"\t"<<A.b<<endl;
    cout<<B.a<<"\t"<<B.b<<endl;
    cout<<(int)B.c<<"\t";

	return 0;
}