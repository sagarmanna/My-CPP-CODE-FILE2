#include<iostream>
using namespace std;

int mul(int a,int b){
    return a*b;
}
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
}
int main(){

    int a,b;
    cin>>a>>b;
    cout<<mul(a,b)<<endl;
    cout<<fact(5);
}