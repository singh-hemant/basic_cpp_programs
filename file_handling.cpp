#include <iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream newFile("C:\\Users\\user\\Desktop\\c++ programs\\file_handling.txt");
	cout<< "File Created...";
	
	newFile<<"File Handling...";
	
	newFile.close();
}
