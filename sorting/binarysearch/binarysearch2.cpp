#include<iostream>
using namespace std;

int binaryserach(int arr[],int n,int key){
    //start, end, mid;
    int start=0,end= n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        end=mid-1;
        else
        start=mid+1;
    }
}
int main(){
    int arr[1000];
    int n;
    cout<<"enter the elements in array:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"enter the key";
    cin>>key;
    cout<<binaryserach(arr,n,key);

}
