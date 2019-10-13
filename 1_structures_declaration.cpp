#include<iostream>
#include<stdio.h>
using namespace std;
struct rect{
    int l;
    int b;
    rect(){
        l=0;
        b=0;
    }
    rect(int a,int c){
        l=a;
        b=c;
    }
};
int* fun(int a){
    int *p= new int(a);
    p[0]=1999;
    return p;
}
void swap( int &a,int &b){
    a=0;b=0;
}
int main(){
    //rect r(5,12);
    //r.l=5;
    //r.b=12;
    //cout<<r.l*r.b;

    //cout<<endl<<sizeof(p);
    struct rect *p=new struct rect();
    p->l=10;
    p->b=20;
    cout<<p->l*p->b;
    int * pp =fun(5);
    cout<<endl<<pp[0];
    int c=1,d=1;
    swap(c,d);
    cout<<endl<<c<<d;
    cout<<endl<<sizeof(int);
    cout<<endl<<sizeof(float);
}
