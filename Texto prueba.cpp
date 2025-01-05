#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;
int main(void){
	char c;int contador;
	ofstream X1;
	X1.open("Texto.txt");
	if(!X1){
		cout<<"no se puede abrir archivo.";
		exit(1);
	}
cout<<"creacion de un archivo desde la entrada.\n";
do{
	cin.get(c);
	if(((isupper(c)) && (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) || isdigit(c))
	X1.put(c);contador++;
}while(c!='*');
cout<<"total de caracteres escritos: "<<contador<<endl;
system("pause");
X1.close();
return 0;
}

