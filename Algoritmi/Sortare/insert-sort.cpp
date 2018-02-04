#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int arr[] = {10,2,9,8,7};

	//det. nr. de elemenbte sir
	int len = sizeof(arr)/sizeof(int);

	for(int i=1;i<len;i++){				//parcrgem sirul

		if(arr[i-1]>arr[i]){			//daca-i mai mic

			int aux=arr[i];
			for(int j=i-1;j>=0;j--){	

				arr[j+1]=arr[j];
				if(arr[j]<aux){
					arr[j+1] = aux;
					break;
				}
				if(j==0){
					arr[j]=aux;
					break;
				}
			}
		}
		//break;
	}

	for(int i=0;i<len;i++)
		cout << arr[i] << ' ';
	return 0;
}