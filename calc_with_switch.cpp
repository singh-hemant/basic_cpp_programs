#include<iostream>
using namespace std;

int main(){
	int a, b, c, res;
	
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter third number(0-5)where:"<<endl;
	cout<<"[0-Addition, 1-substraction, 2-multiplication, 3-division, 4-remainder]"<<endl;
	cin>>c;
	
	
	switch(c){
		case 0:
			res = a+b;
			break;
		case 1:
			res = a-b;
			break;
		case 2:
			res = a*b;
			break;
		case 3:
			res = a/b;
			break;
		case 4:
			res = a%b;
			break;
		default:
			cout<<"Invalid Operation...";
	}
	
	cout<<"Result is: "<<res;
	
}
