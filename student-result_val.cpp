/*Input marks of 3 subjects and calsulate the averge also check inputed marks are in range 
between 0 to 100 and if any marks have less than 40 then print fail*/
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the Marks:";
    cin>>a>>b>>c;
    if(a<0||a>100,b<0||b>100,c<0||c>100){
        cout<<"Invalid Marks";
    }
     float avg=(a+b+c)/3.0;
    cout<<"Average Marks:"<<avg<<endl;

        if(a<=40,b<=40,c<=40){
        cout<<"Failed Student"<<endl;
    }
    else {
        cout<<"Passed Student"<<endl;
    }

    return 0;
}
