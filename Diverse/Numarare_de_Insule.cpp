#include <iostream>
#include <fstream>

using namespace std;

ifstream f("insule.in");

int n,m,nr_Insule = 0,nr=0;
int mat[2000][2000];

void Citire(int n,int m){
   
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            f >> mat[i][j];
        }
    }
}

void Afisare(){

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
}


void fill( int x, int y ){

  	
  	mat[x][y]=0;	// Marcare camp parcurs			

  	//Cautare pt. alt camp din grup

  	if(x>0 && y>0){				
  		if(mat[x-1][y-1]!=0)		//STANGA SUS
    		fill(x-1,y-1);
	}

	if(x>0){
  		if(mat[x-1][y]!=0)			//SUS
    		fill(x-1,y);
	}

	if(x>0 && y<m-1){
  		if(mat[x-1][y+1]!=0)		//DREAPTA SUS
    		fill(x-1,y+1);
	}

	if(y<m){ 
		
		if(mat[x][y+1]!=0){	
  								//DREAPTA
    		fill(x,y+1);
    	}
	}	
  	

	if(x<n-1 && y<m-1){
  		if(mat[x+1][y+1]!=0)		//DREAPTA JOS
    		fill(x+1,y+1);
	}


	if(x<n-1){
  		if(mat[x+1][y]!=0)			//JOS
    		fill(x+1,y);
	}

	if(x<n-1 && y>0){
  		if(mat[x+1][y-1]!=0)		//STANGA JOS
    		fill(x+1,y-1);
	}


	if(y>0){
  		if(mat[x][y-1]!=0)			//STANGA
    		fill(x,y-1);
	}

}


int NumarareInsule(){

	int insule=0;

	for(int i=0; i < n; i++ ){
        for(int j=0; j < m; j++ ){

        	nr=0;
            if( mat[i][j]!=0 ) //am dat peste un grup
            {	
                fill( i, j ); //identific restul elementelor din "insula" ca sa le marchez cu 0
                nr++; //numar
            }
            Afisare();
            cout << '\n' << '\n';			//DREAPTA


            if(nr!=0){ // daca numar este diferit de 0 atunci avem insula
            	insule++; 
            }

            //cout << "nr_Insule: " << insule << '\n';
        }

    }
    
    return insule;
}



int main(){

	f >> n >> m;
    Citire(n,m);
    cout << '\n' << NumarareInsule();
    return 0; 
    
}