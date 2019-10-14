#include<iostream>
using namespace std;

//e^x = 1 + x/1+ x^2 / 2! + x^3 / 3! ...

float taylor(float x,float n){
    static float p=1,f=1;
    if(n==0)
        return 1;
    float r = taylor(x,n-1);
    p *= x;
    f *= n;
    return r + p/f;
}
float betterTaylor(float x,float n){
    static float res=1;
    if(n==0)
        return res;
    res = res*x/n + 1;
    return betterTaylor(x,n-1);
}
int main(){
    cout<<betterTaylor(3,20);
}
