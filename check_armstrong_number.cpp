#include<iostream>
using namespace std;

int main(){
	int a, b=0, c;
	cout<<"Enter the number: ";
	cin>>a;
	c=a;
	while(a>0){
		b = b + (a%10)*(a%10)*(a%10);
		a = a/10;
	}
	
	if (c==b){
		cout<<c<<" is an armstrong number...";
	}
	else{
		cout<<c<<" is NOT an armstrong number...";
	}
}

