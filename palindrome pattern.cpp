#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)>=(n-1)){

                cout<<" "<<n-j<<" ";
            }else{
                cout<<"   ";
            }
        }
        for(int k=0;k<i;k++){
            cout<<" "<<k+2<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
