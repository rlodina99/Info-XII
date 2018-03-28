#include <iostream>
#include <fstream>

using namespace std;

ifstream f("memory009.in");
ofstream g("memory009.out");

int n,m;
int ap[31];

void rezolv(){ 

	f >> n >> m;

	for(int i=0;i<31;i++)
		ap[i]=0;
	int x;
	for(int i=0;i<n;i++){
		f >> x;
		ap[x]=1;
	}
	for(int i=0;i<m;i++){
		f >> x;
		if(ap[x]==1)
			ap[x]=2;
	}
	for(int i=0;i<31;i++){
		if(ap[i]==2)
			g << i << ' ';
	}

}

int main(){
	
	rezolv();
	return 0;
}