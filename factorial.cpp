#include<iostream>
using namespace std;

int main(){
	double a, b=1;
	cout<<"Enter the number: ";
	cin>>a;
	for (int i=1;i<=a;i++){
		b*= i;
	}
	cout<<b;
}

