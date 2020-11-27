#include <iostream>
#include <stdlib.h>
using namespace std;

class Banco{
	private:
		string nombre1;
		int fondos;
	
	public:
		Banco();
		Banco(string nom1, int f): nombre1(nom1), fondos(f){};
		
		string get_nombre1();
		int get_fondos();
		void set_nombre1(string);
		void set_fondos(int);
};

class Persona{
	private:
		string nombre;
		int edad;
		
	public:
		Persona();
		Persona(string nom, int ed): nombre(nom), edad(ed){};
		
		string get_nombre();
		int get_edad();
		void set_nombre(string);
		void set_edad(int);
};

class Dinero{
	private:
		int cantidad;
		string tipo;
		
	public:
		Dinero();
		Dinero(int cant, string tip): cantidad(cant), tipo(tip){};
		
		int get_cantidad();
		string get_tipo();
		void set_cantidad(int);
		void set_tipo(string);
};

Banco::Banco(){
	nombre1="";
	fondos=0;
}

string Banco::get_nombre1(){
	return nombre1;
}
void Banco::set_nombre1(string nom1){
	nombre1=nom1;
}
int Banco::get_fondos(){
	return fondos;
}
void Banco::set_fondos(int f){
	fondos=f;
}

Persona::Persona(){
	nombre="";
	edad=0;
}

string Persona::get_nombre(){
	return nombre;
}
void Persona::set_nombre(string nom){
	nombre=nom;
}
int Persona::get_edad(){
	return edad;
}
void Persona::set_edad(int ed){
	edad=ed;
}

Dinero::Dinero(){
	cantidad=0;
	tipo="";
}

int Dinero::get_cantidad(){
	return cantidad;
}
void Dinero::set_cantidad(int cant){
	cantidad=cant;
}
string Dinero::get_tipo(){
	return tipo;
}
void Dinero::set_tipo(string tip){
	tipo=tip;
}

//Bancos

class Privado:public Banco{
	private:
		float tarifa;
		float interes1;
	
	public:
		Banco(string nom1, float f, float tar, float inte1): Banco(nom1, f), tarifa(tar), interes(inte1){};
		
		float get_tarifa();
		float get_interes1();
		void set_tarfia(float);
		void set_interes1(float);
};

class Publico:public Banco{
	private:
		float interes;
	
	public:
		Banco(string nom1, float f, float inte): Banco(nom1, f), interes(inte){};
		
		float get_interes();
		void set_interes(float);
};

float Privado::get_tarifa(){
	return tarifa;
}
void Privado::set_tarfia(float tar){
	tarifa=tar;
}
float Privado::get_interes1(){
	return interes1;
}
void Privado::set_interes1(float inte1){
	interes1=inte1;
}

float Publico::get_interes(){
	return interes;
}
void Publico::set_interes(float inte){
	interes=inte;
}

//end Bancos

//Personas

class Extranjero:public Persona{
	private:
		string nacionalidad;
		bool residencia_estatus;
	
	public:
		Persona(string nom, int ed, string nac): Persona(nom, ed), nacionalidad(nac), residencia_estatus(false){};
		
		string get_nacionalidad();
		void set_nacionalidad(string);
		void no_residencia();
		void si_residencia();
		bool get_residencia_estatus();
};

class Paisano:public Persona{
	private:
		string estado;
	
	public:
		Persona(string nom, int ed, string est): Persona(nom, ed), estado(est){};
		
		string get_estado();
		void set_estado(string);
}

string Extranjero::get_nacionalidad(){
	return nacionalidad;
}
void Extranjero::set_nacionalidad(string nac){
	nacionalidad=nac;
}
void Extranjero::si_residencia(){
	residencia_estatus=true;
}
void Extranjero::no_residencia(){
	residencia_estatus=false;
}
bool Extranjero::get_residencia_estatus(){
	return residencia_estatus;
}

string Paisano::get_estado(){
	return estado;
}
void Paisano::set_estado(string est){
	estado=est;
}

//end Personas

int main(){
	Privado Banorte("Banorte", 1500000, 0.05, 0.06);
	cout<<Banorte.get_nombre1<<endl;
	cout<<"Fondos es su cuenta: "<<Banorte.get_fondos<<endl;
	cout<<"Tarifa semestral a pagar: "<<Banorte.get_fondos*Banorte.get_tarifa<<"$"<<endl;
	cout<<"Interes bimestral generado: "<<Banorte.get_fondos*Banorte.get_interes<<"$"<<endl;
	Extranjero Erick("Erick",43,"Canada");
	cout<<Erick.get_nombre<<endl;
	cout<<Erick.get_edad<<endl;
	cout<<Erick.get_nacionalidad<<endl;
	cout<<Erick.si_residencia<<endl;
	Dinero DolarCan(1500000,"Dolar Canadiense");
	cout<<"Usted posee: "<<DolarCan.get_cantidad<<" "<<DolarCan.get_tipo<<endl;
}