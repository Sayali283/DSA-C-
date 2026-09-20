#include<bits/stdc++.h>
using namespace std;
/*A School has following grading system:
a.Below 25 -F
b.25 to 44- E
c.45 to 49- D
d.50 to 59- C
e.60 to 79- B
f.80 to 100-A
Ask user to enter marks and print the given grade*/
int main() {
    int m;
    cout<<"Enter the Marks of Student:";
    cin>> m;
    if(m<25)
        cout<<"F Grade";
    else if(m<=44 and m>=25)
        cout<<"Grade E";
    else if(m<=49 and m>=44)
        cout<<"Grade D";
    else if(m<=59 and m>=50)
        cout<<"Grade C";
    else if(m<=79 and m>=60)
        cout<<"Grade B";
    else if(m<=100 and m>=80)
        cout<<"Grade A";
    else 
        cout<<"Grade not defined";
    return 0;
}
