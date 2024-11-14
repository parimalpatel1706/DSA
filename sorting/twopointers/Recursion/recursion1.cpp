#include<iostream>
using namespace std;

void print(int n){
    // base condition
        if(n==1){
            cout<<1<<endl;
            return;
        }
        cout<<n<<endl;
        print(n-1);
    }
int main(){
    // print n to 1

    // itertaive method
    int n=5;
    print(n);
    //for(int i=n;i>0;i--){
     // cout<<i<<endl;
    //}
   
}