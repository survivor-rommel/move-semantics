#include<iostream>
#include<utility>

using namespace std;

class Rectangulo{
	int alto;
	int ancho;
	public:
		
		Rectangulo(int alto , int ancho){ // constructor normal
			this->alto = alto;
			this->ancho = ancho;
		}
		Rectangulo(Rectangulo &&otro) noexcept  // move constructor -- > parecido al constructor copia / aqui copiaremos por rvalue los valores de 
			: alto(0)							// de las variables de un objeto , aqui el objeto inicial del cual copiamos estos datos se quedara vacio
			, ancho(0)
		{
			// aqui copiamos los atributos del objeto del que copiaremos datos
			alto = otro.alto ;
			ancho = otro.ancho;
			// aqui nos aseguramos dejar en un valor predeterminado a las variables del objeto del cual copiamos
			otro.alto = 0;
			otro.ancho = 0;
		}
		void mostrar(){
			cout<<"Alto es : "<<alto<<endl;
			cout<<"Ancho es : "<<ancho<<endl;
			
		}
};

int main(){
	Rectangulo primero(15,20);
	Rectangulo *copia  = new Rectangulo(move(primero)); // uso del move constructor 
	(*copia).mostrar();
	delete copia; // liberando....
	return 0;
}
