#include<iostream>
using namespace std;

int main(){
	int a, fn=0, sn=1, tn=1, temp1, temp2;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<fn<<ends<<sn<<ends<<tn<<ends;
	for (int i=1;i<=a;i++){
		cout<<fn+sn+tn<<ends;
		temp1 = fn;
		temp2 = sn;
		fn = sn;
		sn = tn;
		tn = temp1 + temp2 + tn;
	}
}

