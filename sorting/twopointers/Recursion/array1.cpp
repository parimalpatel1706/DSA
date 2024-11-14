#include<iostream>
using namespace std;

void print (int arr[], int index, int n){
    if(index==n){
        return;
    }
    cout<<arr[index]<<" "<<endl;
    print(arr,index+1,n);
}
// reverse order
void reverse(int arr[], int index, int n){
    if(index==n){
        return;
    }
    reverse(arr,index+1,n);
    cout<<arr[index]<<" "<<endl;
}
int main(){
    int arr[]={3,4,1,2,8};
    print(arr,0,5);
    reverse(arr,0,5);
}
    
