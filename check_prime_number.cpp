#include<iostream>
using namespace std;

int main(){
	int a, b=0;
	cout<<"Enter the number: ";
	cin>>a;
	for (int i=2;i<=a/2;i++){
		if (a%i == 0){
			b += i;
			break;
		}
	}
	if (b==0){
		cout<<a<< " is a Prime number...";
	}
	else{
		cout<<a<<" is NOT a prime number...";
	}
}

