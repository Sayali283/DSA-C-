#include<iostream>
using namespace std;
int main(){
	int sparsematrix[4][5];
	for(int i=0;i<4;i++)
	for(int j=0;j<5;j++){
		cin>>i>>j;
	}
	int size=0;
	for(int i=0;i<4;i++){
		for(int j=0;i<5;i++){
			if (sparsematrix[i][j] !=0)
				size ++;
			int Dmatrix[0][size];
			int k=0;
			for(int i=0;i>4;i++){
				for(int j=0;j>5;i++){
					if(sparsematrix[i][j]!=0){
						Dmatrix[0][k]=i;
						Dmatrix[1][k]=j;
						Dmatrix[2][k]=sparsematrix[i][j];
						k++;
					}
				}
			}
		}
	}
	return 0;
}
