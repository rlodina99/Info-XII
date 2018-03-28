#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");

int n;
int arr[11];

int Fibonacci(int x){

	int nr_2, nr_1, nr_0;
    nr_0 = 1;
    nr_1 = 1; 

    if(x == nr_0)
    	return 1;

	while(nr_2<x){

		nr_2 = nr_1 + nr_0;
        nr_0 = nr_1;
        nr_1 = nr_2;

        if(nr_2==x){
        	return 1;
        	break;
        }

	}

	return 0;
}

void Citire(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(Fibonacci(arr[i])) cout << "DA" << endl;
		else	cout << "NU" << endl;
	}
}


int main(){

	Citire();

	return 0;
}