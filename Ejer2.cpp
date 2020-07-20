#include<iostream>
#include<utility>
using namespace std;

class Ejemplo{
	int dato;
	public:
		void setDato(int d){
			dato = d;
		}
		int getDato(){
			return dato;
		}
};
int main(){
	Ejemplo uno;
	uno.setDato(20);
	Ejemplo dos  = move(uno);
	cout<<dos.getDato();
	return 0;
}
