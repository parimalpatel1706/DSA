#include<iostream>
using namespace std;
int main(){
    //int arr[1000];
    int arr[6]={1,0,1,0,1,0};
    int start=0,end=7-1;
    while(start<end){
        if(arr[start]==0)
        start++;
        else{
            if(arr[end]==0){
            (swap(arr[start],arr[end]));
            start++,end--;
            }
            else{
            end --;
            }
        }
     cout<<"array is :"<<arr<<endl; 
    }
  
}