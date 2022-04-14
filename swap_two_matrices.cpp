#include<iostream>
using namespace std;

int main(){
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
//	cout<<sizeof(arr)/sizeof(arr[0]);

	cout<<"Matrix 1: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<ends;
		}cout<<endl;
	}
	
	cout<<"Matrix 2: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr2[row][col]<<ends;
		}cout<<endl;
	}
	
	// swap
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			int temp = arr[row][col];
			arr[row][col] = arr2[row][col];
			arr2[row][col] = temp;
		}
	}
	
	cout<<"-------------------\n";
	cout<<"Matrix 1: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<ends;
		}cout<<endl;
	}
	
	cout<<"Matrix 2: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr2[row][col]<<ends;
		}cout<<endl;
	}
	
}
