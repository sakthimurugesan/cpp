#include <iostream>
#include <stdlib.h>
using namespace std;
int choi;
int *get_value(){
    int *ptr=NULL;
    cout<<"Enter number of values : ";
    cin>>choi;
    ptr=(int *)calloc(choi,sizeof(int));
    for(int i=0;i<choi;i++){
        cout<<"Enter "<<i+1<<" value : ";
        cin>>*(ptr+i);
    }
    return ptr;

}

int main(){
    int *p,sum=0;
    p=get_value();
    for(int i=0;i<choi;i++){
        sum+=*(p+i);
    }
    cout<<"Total : "<<sum<<endl;
    free(p);
    p=NULL;
    return 0;
}