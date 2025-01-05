#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;
int main(){
	char c;int contador;
	ifstream X1;
	ofstream X2;
	X1.open("Texto.txt");
	X2.open("textox.txt");
	if(!1 || !2){
		cout<<"No se puede abrir el archivo. ",
		exit(1);
	}
	cout<<"Copia los digitos del archivo Texto.txt a un archivo de salida.\n";
	do{
		X1.get(c);
		if(isdigit(c))
		X2<<c;contador++;
	}while(!X1.eof());
	cout<<"Total de digitos escritos: "<<contador<<endl;
	system("pause");
	X1.close();
	X2.close();
	return 0;
}
