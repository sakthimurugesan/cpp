#include <iostream>
using namespace std;
int random(int n){
    int r;
    for (int i = 1; i < n + 1; i++)
    {
        r = rand()%n;
    }
    return r;
}

int main()
{
    int n=45+4;
    cout<<"Random value is : "<<random(n);
    return 0;
}