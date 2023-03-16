#include<iostream>
#include<list>
#include<iterator>
using namespace std;
//STL-List in C++
void print(list<int> x){
    for(int o : x){
        cout<<" "<<o;
    }
    cout<<endl;
}
int main()
{
    list <int> a={70,20,50,10};
    print(a);
    list<int> b;
    b.push_front(150);
    b.push_front(250);
    b.push_back(350);
    print(b);
    cout<<"List First Element in A : "<<a.front()<<endl;
    cout<<"List Last  Element in A : "<<a.back()<<endl;
    cout<<"Empty or Not : "<<a.empty()<<endl;
    cout<<"Before Reverse : ";
    print(a);
    a.reverse();
    cout<<"After Reverse : ";
    print(a);
    cout<<"Before Sort : ";
    print(a);
    a.sort();
    cout<<"After Sort : ";
    print(a);

     for(auto i=a.begin();i!=a.end();i++){cout<<" "<<*i;}
    cout<<endl;

    for(auto i=b.cbegin();i!=b.cend();i++){cout<<" "<<*i;}
    cout<<endl;


    for(auto i1=a.crbegin();i1!=a.crend();i1++){cout<<" "<<*i1;}
    cout<<endl;

    for(auto i1=a.rbegin();i1!=a.rend();i1++){cout<<" "<<*i1;}
    cout<<endl;



b.push_front(25);
b.push_back(35);
cout<<"b";for(auto i=b.begin();i!=b.end();i++){cout<<" "<<*i;}
cout<<endl;
b.pop_back();
b.pop_front();

cout<<"b";for(auto i=b.begin();i!=b.end();i++){cout<<" "<<*i;}




    return 0;

}