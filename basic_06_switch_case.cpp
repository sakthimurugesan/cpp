#include <iostream>
using namespace std;
int main(){
	
	char a;
	cout<<"Enter a character : ";
	cin>>a;
	switch(a){
		case 'a':
			cout<<"A"<<endl;
			break;
		case 'b':
			cout<<"B"<<endl;
			break;
	}
	
	int b;
	cout<<"Enter a number : ";
	cin>>b;
	switch(b){
		case 1:
			cout<<1<<endl;
			break;
		case 2:
			cout<<2<<endl;
			break;
	}
	
	int c;
	
	cout<<"Enter a number (1-12) : ";
	
	cin>>c;
	
	switch(c){
		case 1:
			case 3:
				case 5:
					case 7:
						case 8:
							case 10:
								case 12:
									cout<<"This month has 31 days";break;
									
									
			case 4:
				case 6:
					case 9:
						case 11:
								cout<<"This month has 30 days";break;
								
		case 2:
			cout<<"This month has 28 days";break;
								
								
	}
	
	
	
	return 0;
}