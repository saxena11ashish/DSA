#include<iostream>
using namespace std;
int po(int m,int n){
    if(n==0){
        return 1;
    }
    return m*po(m,n-1);

}
int improvedPo(int m,int n){
    if(n==0) return 1;
    if(n%2==0)
        return improvedPo(m*m,n/2); // 2 ^ 8  = 2*2 ^ 4
    else
        return m * improvedPo(m*m,(n-1)/2); // n was odd, multiplied once , then n-1 became even applied above formula
}

int main(){
    cout<<improvedPo(2,4);
}
