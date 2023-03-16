#include <iostream>
using namespace std;
int main(){
    int a=12,*p,**q;
    p=&a;
    q=&p;
    cout<<"A : "<<a<<endl;
    cout<<"P : "<<p<<endl;
    cout<<"*p : "<<*p<<endl;
    cout<<"Q : "<<q<<endl;
    cout<<"**Q : "<<**q<<endl;
    *p+=1;
    cout<<"-----------------------------\n*p+=1\n";
    cout<<"-----------------------------\n";
    cout<<"A : "<<a<<endl;
    cout<<"P : "<<p<<endl;
    cout<<"*p : "<<*p<<endl;
    cout<<"Q : "<<q<<endl;
    cout<<"**Q : "<<**q<<endl;
    
  




	return 0;
}