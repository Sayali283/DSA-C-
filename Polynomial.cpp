#include<iostream>
using namespace std;
int main(){
	int poly[20];
	int n;
	cout<<"Enter the degree of polynomial:";
	cin>>n;
	cout<<"Enter the coefficient:\n";
	for(int i=n; i>=0;i--) {
		cout<<"Coefficient of x^"<<i<<":";
		cin>>poly[i];
	}
		cout<<"\nPolynomial is:";
		for(int i=n;i>=0;i--){
			if (poly[i]!=0){
				if(i!=n && poly[i]>0)
					cout<<"=";
				if(i==0)
					cout<<poly[i];
				else if(i==1)
					cout<<poly[i]<<"x";
				else
					cout<<poly[i]<<"x^"<<i;
			}
		}
	return 0;
}
