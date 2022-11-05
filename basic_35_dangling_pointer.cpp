#include <iostream>
#include <stdlib.h>
using namespace std;
int *value(){
    int a=10;
    return &a;
}
int main(){
    int *ptr;
    ptr=value();
    cout<<ptr;
	return 0;
}