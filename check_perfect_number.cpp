#include<iostream>
using namespace std;

int main(){
	int a, b=0;
	cout<<"Enter the number: ";
	cin>>a;
	for (int i=1;i<=a/2;i++){
		if (a%i == 0){
			b += i;
		}
	}
	if (b==a){
		cout<<a<< " is a Perfect number...";
	}
	else{
		cout<<a<<" is NOT a perfect number...";
	}
}

