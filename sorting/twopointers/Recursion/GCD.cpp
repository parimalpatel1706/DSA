#include<iostream>
using namespace std;

// GCD(greatest common divisor) of 2 number
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    cout<<gcd(18,48);
}