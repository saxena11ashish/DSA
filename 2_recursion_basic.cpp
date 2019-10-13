#include<iostream>
using namespace std;
void fun(int a){
    if(a==0){
        cout<<endl;
        return;
    }
    cout<<a<<" ";
    fun(a-1);
    cout<<a<<" ";
}
int main(){
    fun(10);
}
