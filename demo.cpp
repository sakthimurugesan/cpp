#include <iostream>
using namespace std;
void p(int n){
    cout<<"Hello";
    p(n-1);
}
int main()
{

p(5);

}