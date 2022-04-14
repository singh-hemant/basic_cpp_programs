#include<iostream>
using namespace std;

int main(){
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//	cout<<sizeof(arr)/sizeof(arr[0]);
	cout<<"Matrix: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<ends;
		}cout<<endl;
	}
	
	//transpose of matrix
	cout<<"Transpose of the matrix: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[col][row]<<ends;
		}cout<<endl;
	}
}
