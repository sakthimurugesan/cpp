#include <iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}


int main(){
int a;
cout<<"Enter a number : ";cin>>a;
cout<<"Cube of the given number is "<<cube(a);
	return 0;
}