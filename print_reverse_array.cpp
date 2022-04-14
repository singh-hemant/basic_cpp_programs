#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 22, 4, 6, 88, 10};
	int len = sizeof(arr)/sizeof(arr[0]) - 1;
	
	for (int i=len;i>=0;i--){
		cout<<arr[i]<<ends;
	}
}
