#include<iostream>
using namespace std;
int main(){
	int p1[20], p2[20], sum[20];
	int n1, n2, n;
	cout<<"Enter the degree of 1st poly:";
	cin>>n1;
	cout<<"Enter the coefficient:\n";
	for(int i=n1;i>=0;i--) {
		cout<<"Coefficient of x^"<<i<<":";
		cin>>p1[i];
	}
	cout<<"Enter the degree of 2nd poly:";
	cin>>n2;
	cout<<"Enter the coefficient:\n";
	for(int i=n2;i>=0;i--) {
		cout<<"Coefficient of x^"<<i<<":";
		cin>>p2[i];
	}
	n=(n1>n2)? n1:n2;
	for(int i=0;i<=n;i++){
		sum[i]=p1[i]+p2[i];
	}
	cout<<"Sum of two polynomials :";

		for(int i=n;i>=0;i--){
			if (sum[i]!=0){
				if(i!=n && sum[i]>0)
					cout<<"+";
				if(i==0)
					cout<<sum[i];
				else if(i==1)
					cout<<sum[i]<<"x";
				else
					cout<<sum[i]<<"x^"<<i;
			}
		}
	return 0;
}
