#include <iostream>
using namespace std;

struct student{
	char name[20];
	int rollno;
	double fees;
};

union student{
	char name[20];
	int rollno;

};
int main(){
	struct student s;
	cin>>s.name;
	cout<<s.name;
} 
