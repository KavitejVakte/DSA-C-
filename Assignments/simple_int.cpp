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

    float simple_interest = p*r*t/100;
    cout<<"Simple Interest: "<<simple_interest;

    return 0;
}