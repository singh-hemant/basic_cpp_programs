#include<iostream>
#include<cmath>
using namespace std;

bool pythagorianTriplet(int x, int y, int z){
    int b, c;
    int a = max(x, max(y, z));

    if (a==x){
        b = y;
        c = z;
    }
    else if (a==y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    if ((pow(b, 2) + pow(c, 2))==pow(a, 2)){
        return true;
    } else{
        return false;
    }
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    bool flag = pythagorianTriplet(a, b, c);
    cout<<flag;
    return 0;
}
