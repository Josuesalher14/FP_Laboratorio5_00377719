#include <iostream>
#include <stdlib.h> //programa que realiza la serie fibonacci

using namespace std;

int main(){
	int n, a=0, b=1, c=1;
	
	cout<<"ingrese el numero de elementos: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		c=a+b;
			cout<<c;
			a=b;
			b=c;
			cout<<"\n";
	}
	
	system ("pause");
		
		return 0;
}
