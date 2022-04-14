#include<iostream>
#include<string>
using namespace std;

struct student{
	string name;
	int roll_no;
	string subjects;
	double fees;
	int standard;
};

int main(){
	struct student s[5];
	for(int i = 0; i<5; i++){
		cout<<"Student "<<i+1<<" Entry:\n";
		cout<<"Enter Name: ";
		cin>>s[i].name;
		
		cout<<"Enter Roll Number: ";
		cin>>s[i].roll_no;
		
		cout<<"Enter Standard: ";
		cin>>s[i].standard;
		
		cout<<"Enter Subjects: ";
		cin>>s[i].subjects;
		
		cout<<"Enter fees: ";
		cin>>s[i].fees;
		cout<<"----------------------------------------\n";
	}
	
	for(int i = 0; i<5; i++){
		cout<<"student "<<i<<" records: \n\n";
		cout<<"Name: "<<s[i].name<<endl;
		cout<<"Roll No: "<<s[i].roll_no<<endl;
		cout<<"Standard: "<<s[i].standard<<endl;
		cout<<"Subjects: "<<s[i].subjects<<endl;
		cout<<"Fees: "<<s[i].fees<<endl;
		cout<<"-------------------------------------------\n";
	}
	
}
