#include<iostream>
using namespace std;

int main(){
	int a, fn=0, sn=1, tn;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<fn<<ends<<sn<<ends;
	for (int i=1;i<=a;i++){
		cout<<fn+sn<<ends;
		tn = fn;
		fn = sn;
		sn = tn+sn;
	}
}

