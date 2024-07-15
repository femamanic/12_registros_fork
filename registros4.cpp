#include <iostream>
#include <string>
using namespace std;

struct atletas{
	char nombre [20];
	string pais;
	char disciplina [30];
	int medallas;
}datos[100000];

int main (){
	int n, mayor=0;
	string p;
	cout<<"Ingrese la cantidad de personas:";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"\n***Datos de la persona n�"<<i+1<<"***"<<endl;
		cout<<"\nIngrese el nombre:";
		cin>>datos[i].nombre;
		cout<<"Ingrese el pa�s:";
		cin>>datos[i].pais;
		cout<<"Ingrese la disciplina:";
		cin>>datos[i].disciplina;
		cout<<"Ingrese la cantidad de medallas:";
		cin>>datos[i].medallas;
		if (datos[i].medallas>mayor){
			mayor=datos[i].medallas;
		}
	}
	cout<<"\n===>Ingrese un pa�s:";
	cin>>p;
	cout<<"\nLos datos de las personas de este pa�s son:"<<endl;
	for (int i=0; i<n; i++){
		if (datos[i].pais==p){
			cout<<"\nNombre:"<<datos[i].nombre<<endl;
			cout<<"Pa�s:"<<datos[i].pais<<endl;
			cout<<"Disciplina:"<<datos[i].disciplina<<endl;
			cout<<"Medallas:"<<datos[i].medallas<<endl;
			if (datos[i].medallas==mayor){
				cout<<"***ATLETA CON M�S MEDALLAS DE ESTE PA�S***"<<endl;
			}
		}
	}
	return 0;
}