#include<bits/stdc++.h>
using namespace std;
/* Take the Age from user and then decide Accordinglu:
a.if age <18 print not eligible for job
b.if age >=18 print eligible for job
c.if age >=50 and age<=57 then print eligible but retirement soon
d.if age >57 print retirement time
*/
int main() {
    int a;
    cout<<"Enter the age:";
    cin>> a;
    if(a<18){
        cout<<"Not eligible for job.";
    }
    else if(a<=57){
        cout <<"Eligible for Job";
        if(a>=50 and a<=57){
            cout<<" but retirement soon";
        }
    }
    else{
        cout<<"Retirement time";
    }
    return 0;
}
