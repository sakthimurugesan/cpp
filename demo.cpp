#include <iostream>
using namespace std;
int main(){
    int p=12,*q,**s,***r,****t;
    q=&p;
    s=&q;
    r=&s;
    ***r+=1;
    t=&r;
    ****t+=1;

    cout<<p<<endl;
    cout<<*q<<endl;
    cout<<**s<<endl;

}