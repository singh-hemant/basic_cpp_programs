#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 22, 4, 6, 88, 10};
	int len = sizeof(arr)/sizeof(arr[0]);
	int max = 0;
	
	for (int i=0;i<len;i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	cout<<"max: "<<max;
}
