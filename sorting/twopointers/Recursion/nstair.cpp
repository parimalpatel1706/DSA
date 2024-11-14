#include<iostream>
using namespace std;

int total_ways(int n){
    if(n<=1){
        return 1;
    }
    return total_ways(n-1)+total_ways(n-2);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<total_ways(n);
}