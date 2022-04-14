#include<iostream>
#include<string>
using namespace std;

int main(){
	string str, rev_str;
	cout<<"Enter the string: ";
	getline(cin, str);
	
	for (int i=str.length()-1;i>=0;i--){
		rev_str += str[i];
	}
	
	if(str==rev_str){
		cout<<str<<" is pelindrome...";
	}else{
		cout<<str<<" is NOT pelindrome...";
	}
	
}
