#include<iostream>
using namespace std;
void fun3(int n){
    if(n==0){
        cout<<"happy birthday";
        return;
    }
    cout<< n <<" days are left for birthday\n";
    fun3(n-1);
}
int main(){
    //fun3(3);
    int n;
    cout<<"enter the number:";
    cin>>n;
    fun3(n);
    
}