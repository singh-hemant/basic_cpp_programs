#include<iostream>
using namespace std;

int main(){
	int arr[] = {1, 22, 4, 6, 88, 10};
	int len = sizeof(arr)/sizeof(arr[0]);
	int arr2[len+1];
	int num=24, loc=6;
	
	// when insert position is at start or in the middle
	for (int i=0; i<=len;i++){
		
		if (loc<=i){
			if (i == loc){
			arr2[i] = 0;
			}else{
			arr2[i] = arr[i-1];
			}
		}else{
			arr2[i] = arr[i];
		}
	}
	arr2[loc] = num;
	
			
	for (int k=0;k<=len;k++){
		cout<<arr2[k]<<ends;
	}
}
