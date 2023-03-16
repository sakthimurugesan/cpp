#include <iostream>
using namespace std;
int main(){
    int a=10,b=0,c;
    try{
        if(b==0){
            throw 1;}
        c=a/b;
        cout<<"The answer is "<<c<<endl;
    }
    catch(int e){
        cout<<"Error code : "<<e<<endl;
        cout<<"Can't divide by zero"<<endl;
    }

	return 0;
}