#include<iostream>
using namespace std;

int fact(int n){
    // base case
    if(n==1|| n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n<0){
        cout<<"factorial is not possible\n";
        return 0;
    }
    cout<<fact(n);
}