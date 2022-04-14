#include<iostream>
using namespace std;

int main(){
	float c, f;
	cout<<"Enter the temperature(in celsius): ";
	cin>>c;
	
	f = (9*c)/5 + 32;
	cout<<c<<" in farenheit is: "<<f;
}
