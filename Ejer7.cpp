#include<iostream>
#include<utility>

using namespace std;

class Rectangulo{
	int alto;
	int ancho;
	public:
		Rectangulo(int alto, int ancho)
		{
			this->alto=alto;
			this->ancho=ancho;
		}
		Rectangulo& operator=(Rectangulo &&otro) noexcept
		{
			if(this != &otro)  // verifica que el objeto no se llame asimismo
			{
				this->ancho  = 0; // desasigna los valores 
				this->alto = 0;
				
				alto = otro.alto;  // mueve los valores del objeto ingresado(a copiar) 
				ancho = otro.ancho;
				
				otro.alto = 0; //deja al objeto del cual copiamos , en valores nulos o cero
				otro.ancho = 0;
			}
			return *this; // retorna *this
		}
};

int main(){
	Rectangulo primero(10,20);
	Rectangulo asignacion  = move(primero);
	
	
	return 0;
}
