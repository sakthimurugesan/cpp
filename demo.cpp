#include <iostream>
#include <ctype.h>
using namespace std;
void p(int n){
    if(n>0){
    cout<<"\nhello\n"<<n;
    p(n-1);}
    return;
}

int main()
{
   p(5);


}