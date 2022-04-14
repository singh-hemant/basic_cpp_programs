#include <iostream>
using namespace std;

int a; //extern(global)
static int d; //register

int main(){
	auto int b; // auto(local)
	static int c; // static
	register int e; //register
	
	cout <<a<<ends<<b<<ends<<c<<ends<<e<<ends<<d;
}
