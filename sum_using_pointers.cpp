#include<iostream>
using namespace std;

int main(){
	int num1, num2, *p1, *p2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	p1 = &num1;
	p2 = &num2;
	
	cout<<"Sum: "<<*p1+*p2;
	
	
}
