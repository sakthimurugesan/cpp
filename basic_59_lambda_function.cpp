#include <iostream>
using namespace std;
auto sum=[](int a,int b){return a+b;};
int main(){
    int a,b;
    cout<<"Enter a number 1 : ";cin>>a;
    cout<<"Enter a number 2 : ";cin>>b;
    cout<<"The sum of two numbers is : "<<sum(a,b)<<endl;
	return 0;
}