#include<iostream>
using namespace std;

int main(){
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
//	cout<<sizeof(arr)/sizeof(arr[0]);
	cout<<"Matrix: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<ends;
		}cout<<endl;
	}
	
	//mirror of matrix
	cout<<"Mirror of the matrix: "<<endl;
	for (int row=0;row<3;row++){
		for(int col=2;col>=0;col--){
			cout<<arr[row][col]<<ends;
		}cout<<endl;
	}
}
