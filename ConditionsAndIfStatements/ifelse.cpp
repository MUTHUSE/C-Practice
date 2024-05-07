#include <bits/stdc++.h>
using namespace std;
/*
If his basic salary is less than RS.1500, then HRA = 10% and DA = 90% of basic salary. If his salary is either equal to or above RS.1500, then HRA = RS.500 and DA = 98% of basic salary.
If the employee's salary is input through the keyboard
Write a program to find his gross salary.
*/
int main()
{
    float basicSalary,hRA, dA, gs;
    cout<<"\n Enter the Basic Salary : ";
    cin>>basicSalary;
    
    if(basicSalary < 1500 ){
        hRA = (basicSalary*10)/100;
        dA = (basicSalary*90)/100;
    }else{
        hRA = 500;
        dA = (basicSalary*98)/100;
    }
    
    gs = basicSalary + hRA + dA;
    cout<<"\n Gross Salary : "<<gs;
    cout<<"\n Basic Salary : "<<basicSalary;
    cout<<"\n HRA : "<<hRA;
    cout<<"\n DA : "<<dA;

    return 0;
}
