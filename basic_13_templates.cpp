#include <iostream>
using namespace std;
template <class T>
void swapp(T &x,T &y){
    T t=x;
    x=y;
    y=t;
}
int main(){
string s,name="sakthi",city="karur";
int x=10,y=12;
    
    cout<<"\t\tBefore swapping\n";
    cout<<"name\t"<<name<<"\t|\tcity\t"<<city;
    swapp(name,city);
    cout<<"\n\t\tAfter swapping\n";
    cout<<"name\t"<<name<<"\t|\tcity\t"<<city;

    cout<<"\n\t\tBefore swapping\n";
    cout<<"\nx\t"<<x<<"\t|\ty\t"<<y;
    swapp(x,y);
    cout<<"\n\t\tAfter swapping\n";
    cout<<"\nx\t"<<x<<"\t|\ty\t"<<y;

	return 0;
}