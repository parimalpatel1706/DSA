#include<iostream>
using namespace std;

// sum of square of natural first number

int sqsum(int n){
    if(n==1){
        return 1;
    }
    return n*n+sqsum(n-1);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<sqsum(n);
}