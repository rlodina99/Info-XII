#include<iostream> 

using namespace std; 

int main(){

	int n=10,a[50]={1,99,2,7,0,15,2,11,10,4},b[50],k[50]={0};
	

	for(int i=0;i<n-1;i++) 
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j]) 
				k[i]++;
			else 
				k[j]++; 

	for(int i=0;i<n;i++) 
		b[k[i]]=a[i]; 


	for(int i=0;i<n;i++)      // AFISARE VECTOR ORDONAT
		cout<<b[i]<<" ";
	cout<<endl;

	return 0;

}




