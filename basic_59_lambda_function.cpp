#include <iostream>
using namespace std;
auto sum=[](int a,int b){return a+b;};
auto fact=[](int a){long int i=1;
for(int j=2;j<=a;j++){i*=j;}return i;};
int main(){
    int a,b;
    cout<<"Enter a number 1 : ";
    cin>>a;
    cout<<"Enter a number 2 : ";
    cin>>b;
    cout<<"The sum of two numbers is : "<<sum(a,b)<<endl;
    cout<<"Factorial of "<<a<<" "<<fact(a);
    cout<<12+12;
	return 0;

}