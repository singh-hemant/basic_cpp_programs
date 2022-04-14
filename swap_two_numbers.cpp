#include<iostream>
using namespace std;

int main(){
	int a, b, temp;
	cout<<"Enter the two numbers for swapping: ";
	cin>>a>>b;
	
	temp = a;
	a = b;
	b = temp;
	cout<<a<<ends<<b;
}

