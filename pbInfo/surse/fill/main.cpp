#include <iostream>
#include <fstream>

using namespace std;

ifstream f("fill.in");
ofstream g("fill.out");

int n,m;
int mat[100][100];

void Citire(){

	f >> n >> m;

	for(int i=0; i<n; i++){
		for (int j = 0; j < m; j++)
		{
			f >> mat[i][j];
		}
	}

}

void Afisare(){


	for(int i=0; i<n; i++){
		for (int j = 0; j < m; j++)
		{
			cout <<  mat[i][j] << ' ';
		}
		cout << '\n';
	}
}

void Fill( int x, int y){


	mat[x][y]=0; // notam trecerea
	// cautam mai departe Recursiv
	if(x>0 && mat[x-1][y]==1)			
		Fill(x-1,y); //SUS
	if(x<n-1 && mat[x+1][y]==1)			
		Fill(x+1,y); //JOS
	if(y>0 && mat[x][y-1]==1)			
		Fill(x,y-1); //STANGA
	if(y<m-1 && mat[x][y+1]==1)			
		Fill(x,y+1); //DREAPTA


}

int Cautare_Insule(){

	int nr_insule=0;

	for(int i=0; i<n; i++){
		for (int j = 0; j < m; j++)
		{
			if(mat[i][j]==1){		
				Fill(i,j);
				nr_insule++;
			}
		}
	}
	return nr_insule;
}

int main(){

	Citire();
	
	g << Cautare_Insule();
	
	return 0;

}