#include<iostream>
using namespace std;

// sum of first n natural number
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+(sum(n-1));
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<sum(n);
}