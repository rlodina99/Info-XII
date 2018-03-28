#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere21.in");

int GCD(int A, int B)
{
    if(!B)
        return A;
    return GCD(B, A%B);
}

int Oglindit(int A){

	int ogl=0;

	while (A != 0)
	{
		ogl = ogl * 10 + A % 10; // se inverseaza cifra cu cifra numarul
		A = A / 10; // se taie pe rand cifrele numarului
	}

	return ogl;

}

int Suma(){

	int A=1, B=1, sum=0;
    
    while(A!=0 && B!=0){
    	cin >> A >> B;

    	if( GCD(A,B)==1 && GCD(Oglindit(A),Oglindit(B))==1 ){
    		//cout << A << ' ' << B << '\n';
    		sum+=A+B;
    	}

    }

    return sum;

}
 
int main()
{

	cout << Suma();

    return 0;

}