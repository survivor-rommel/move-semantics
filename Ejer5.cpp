#include<iostream>
#include<utility>

using namespace std;

void swap(int &a , int &b){ // uso de move para intercambio de valores en el metodo swap
	int temporal  = move(a); // ahora el valor de a va para temporal , a queda vacía
	a = move(b); // a el cual esta vacío recibe el valor de b , por lo que se queda vacío
	b = move(temporal); // b recibe el valor de temporal , el cual ahora se quedo vacio y morira al terminar el metodo
}

int main(){
	int a{10};
	int b{20};  
	cout<<"Valor de a : "<<a<<endl;	
	cout<<"Valor de b : "<<b<<endl;
	swap(a,b);
	cout<<"\nValor de a despues de intercambiar :"<<a<<endl;
	cout<<"Valor de b despues de intercambiar :"<<b<<endl;
	return 0; 
}
