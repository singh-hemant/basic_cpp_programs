#include<iostream>
#include<string>
#include<algorithm> //for using 'transform'
using namespace std;

int main(){
	string str, rev_str;
	cout<<"Enter the string: ";
	getline(cin, str);
	
//	transform(str.begin(), str.end(), str.begin(), ::toupper);
	
	//uppercase
	for (int i=0; i<str.size();i++){
		str.at(i) = toupper(str.at(i));
	}
	cout<<str<<endl;
	
	//lowercase
	for (int i=0; i<str.size();i++){
		str.at(i) = tolower(str.at(i));
	}
	
	cout<<str;
}
