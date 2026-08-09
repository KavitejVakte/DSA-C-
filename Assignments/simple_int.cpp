#include<iostream>
using namespace std; 
int main(){
    float p,r,t;
    cout<<"Enter Principle:";  //simple intrest = prt/100
    cin>>p;
    cout<<"Enter rate:"; 
    cin>>r;
    cout<<"Enter Time:"; 
    cin>>t;

    float si =(p*r*t)/100;
    cout<<"simple intrest is;"<<si;
} 