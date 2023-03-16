#include<iostream>
#include<deque>
using namespace std;
//STL-Deque in C++
int main()
{
    deque<int> d={10};
    d.push_back(25);
    d.push_front(45);
    for(int x : d){
	cout<<" "<<x;
    }
    cout<<endl;
    cout<<"Deque Size : "<<d.size()<<endl;
    cout<<"Deque Empty or Not : "<<d.empty()<<endl;
    cout<<"Deque Element At 2 Index : "<<d.at(2)<<endl;
    cout<<"Deque First Element: "<<d.front()<<endl;
    cout<<"Deque Last Element: "<<d.back()<<endl;
    d.pop_back();
    d.pop_front();
    for(int x : d){
	cout<<" "<<x;
    }
    
    return 0;
}