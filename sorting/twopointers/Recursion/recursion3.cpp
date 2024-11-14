#include<iostream>
using namespace std;
// Print number from 1 to N;

void print(int num){
    if(num==1){
        cout<<1<<endl;;
        return;
    }
    print(num-1);
    cout<<num<<endl;
}
int main(){
    int num=5;
    print(num);
}