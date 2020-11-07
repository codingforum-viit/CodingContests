#include<bits/stdc++.h>
using namespace std;

int rec(int n,int m){
    if(n>=m){
        return n-m;
    }
    if(m%2==0){
        return 1+rec(n,m/2);
    }
    if(m%2==1){
        return 1+rec(n,m+1);
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    cout<<rec(n,m)<<endl;;
}
