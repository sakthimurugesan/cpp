// You are using GCC
#include <iostream>
using namespace std;
class A{
    private:
    int n;
    public:
    void get(){
        cin>>n;
        string name[n];
        string gender[n];
        char grad[10][30];
        int exp1[n];
        for(int i=0;i<n;i++)
        {
            cin>>name[i];
            gets(grad[i]);
            cin>>exp1[i];
            cin>>gender[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                int temp_exp=exp1[i];
                exp1[i]=exp1[j];
                exp1[j]=temp_exp;
                string temp_name=name[i];
                name[i]=name[j];
                name[j]=temp_name;
                char temp_grad[30]=grad[30];
                grad[i]=grad[j];
                grad[j]=temp_grad;
            }
        }
        for(int i=0;i<n;i++){
            cout<<name[i]<<endl;
            cout<<grad[i]<<endl;
            cout<<exp1[i]<<endl;
        }

    }
};
int main(){
    A a;
    a.get();
    return 0;
}