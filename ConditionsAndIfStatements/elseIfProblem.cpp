#include<bits/stdc++.h>
using namespace std;
/*
* A library charges a fine for every book returned late.
For first 5 days 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be canceled.
Write a program to accept the number of days the member is late to return the book days the member the fine or the appropriate message.
*/
int main(){
    int n;
    cout<<"Enter your returned day : ";
    cin>>n;
    if(0 < n >= 5){
        cout<<"\n You have pay for fine is 50 paise";
    }else if(6 >= n <= 10){
        cout<<"\n You have pay for fine is 1 rupee";
    }else if(10 > n <= 30){
        cout<<"\n You have pay for fine is 5 rupees";
    }else{
        cout<<"\n Your membership will be canceled";
    }
    return 0;
}
