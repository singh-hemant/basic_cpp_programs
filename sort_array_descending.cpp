#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 22, 4, 6, 88, 0};
	int len = sizeof(arr)/sizeof(arr[0]);
	int arr2[len];
	
	for (int i=0;i<len;i++){
		for (int j=i+1; j<len;j++){
			if (arr[i]<arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int k=0;k<len;k++){
		cout<<arr[k]<<ends;
	}
}
