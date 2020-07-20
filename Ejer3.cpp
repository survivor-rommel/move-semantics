#include<iostream>

using namespace std;

int main(){
	string primero = "hola mundito";
	string && ref = primero; //error al momento de compilar
	return 0;
}
