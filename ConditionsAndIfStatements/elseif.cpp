#include <bits/stdc++.h>
using namespace std;
/*
A company insures its drivers in the following cases:
1. If the drivers is married.
2. If the drivers is unmarried, male & above 30 years of age.
3. If the drivers is unmarried, female & above 25 years of age.
*/

int main()
{
    char maritalStatus;
    cout<<"\n Enter your Marital status : ";
    cin>>maritalStatus;
    
    if( maritalStatus == 'm' || maritalStatus == 'M' ){
        cout<<"\n You're eligible for insurance";
    }else if(maritalStatus == 'u' || maritalStatus == 'U' ){
        int age;
        char gender;
        
        cout<<"\n Enter your age and gender are : ";
        cin>>age>>gender;
        if((gender == 'm' || gender == 'M') && age > 30){
            cout<<"\n You're eligible for insurance";
        }else if((gender == 'f' || gender == 'F') && age > 25){
            cout<<"\n You're eligible for insurance";
        }else{
            cout<<"\n Invalid gender or age";
        }
    }else{
        cout<<"\n Invalid marital status input";
    }

    return 0;
}
