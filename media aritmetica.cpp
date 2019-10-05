#include <iostream>

using namespace std;

int main(){
	int total;
	
		cout<<"ingrese el total de datos ";
		cin>>total;
	
	float aux, suma=0;
	
	for(int i=0;i<total; i++){
			
		cout<<"ingrese el dato "<<(i+1)<<" : ";
		cin>>aux;
		
	suma+=aux;
	}

		cout<<"la media aritmetica es: "<<(suma/total);
		
}
