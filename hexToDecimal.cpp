#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int hexaToDecimal(string n){
    int ans = 0;
    for(int i=n.length()-1; i>=0 ;i--){
        if (int(n[i])>= 97 && int(n[i]) <= 102){
            ans += (int(n[i]) - 87)*pow(16, n.length()-i-1);
        }
        else{
            ans += (int(n[i])-48)*pow(16, n.length()-i-1);
        }
    }
    return ans;
}

int main(){
    string a;
    cin>>a;
    cout<<hexaToDecimal(a);
    return 0;
}
