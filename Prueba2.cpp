#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>
#include<conio.h>
using namespace std;
class Arch{
	private:
		ifstream uno;
	public:
		Arch(){
			uno==NULL;
		}
		int escribirtexto(ofstream &,char []);
};
int Arch::escribirtexto(ofstream &sale,char cad[20]){
	do{
		gets(cad);
			sale<<cad;
			strrev(cad);
	}while(cad=='\0');
	getch();
	do{
	gets(cad);
	strrev(cad);
	sale<<cad;
	}while(!sale.eof());
}

int main(){
	Arch A;
	char c[30];int b;
	ofstream sale;
	ifstream ent;
//	sale.open("Practica1.txt",ios::app);
	sale.open("ejemplo.txt");
	if(!sale){
		cout<<"Error en la apertura de archivo..";
		exit(1);
	}
	b=A.escribirtexto(sale,c);
 	sale.close();
    return 0;
}

