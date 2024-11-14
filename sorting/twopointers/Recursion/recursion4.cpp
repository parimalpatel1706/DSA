#include<iostream>
using namespace std;
// print 1 to N (even number);

void print(int N){
    if(N==2){
        cout<<2<<endl;
        return;
    }
    print(N-2);
    cout<<N<<endl;
}
int main(){
    int N;
    cout<<"enter the number";
    cin>>N;
    if(N%2==1){
        N--;
    }
    print(N);
}