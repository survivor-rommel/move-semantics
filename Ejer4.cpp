#include<iostream>
#include<utility>
using namespace std;

int main(){
	string ca1 = "hello"; 
	string ca2 = "world";
	string& lvalueRef = ca1; // declaramos referencia a rvalue ca1
	lvalueRef = "hello for all my  "; // modicamos ca1 con la referencia a lvalue
	string && rvalueRef = ca1 + ca2; // declaramos referencia al r value
	rvalueRef += " yeah ";  // modificamos la cadena temporal
	cout<<rvalueRef<<endl; // se imprime
}
