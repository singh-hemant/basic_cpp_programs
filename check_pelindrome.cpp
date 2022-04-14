#include<iostream>
using namespace std;

int main(){
	int a, b=0, c;
	cout<<"Enter the number: ";
	cin>>a;
	c=a;
	while(a>0){
		b = b*10 + a%10;
		a = a/10;
	}
	if(c==b){
		cout<<"The number is pelindrome...";
	}
	else{
		cout<<"The number is not pelindrome...";
	}
}

