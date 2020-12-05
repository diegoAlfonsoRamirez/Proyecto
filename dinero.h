/* 
Proyecto Clases y Objetos
Diego Alfonso Ramírez Montes
A01707596
04/12/20
 */

/* Clase Dinero, que hereda parametros de la clase Extranjero
Contine 2 atributos extra: moneda y cantidad */

#ifndef DINERO_H_
#define DINERO_H_
#include <string>
#include "personas.h"
#include <sstream>

/* Declaracion de la clase Dinero */

class Dinero:public Extranjero{
	
	public:
		
		/* Declaracion de variables de instancia */
	
		string moneda;
		int cantidad;
	
	public:
	
		// Declaracion de todos los métodos que mi objeto tendra
		// Constructor
		// @param string nombre, int edad, string nac, bool res, string mon, int cant
		// @return Objeto Dinero
		
		Dinero(){};
		Dinero(string nombre, int edad, string nac, bool res, string mon, int cant): Extranjero(nombre, edad, nac, res), moneda(mon), cantidad(cant){};
		string get_moneda();
		int get_cantidad();
		void set_moneda(string);
		void set_cantidad(int);
		
};

/* Getters y Setters de moneda y cantidad */

/* getter moneda
@param
@return string:moneda usada */

string Dinero::get_moneda(){
	return moneda;
}

/* setter de moneda
@param string:mon
@return */

void Dinero::set_moneda(string mon){
	moneda=mon;
}

/* getter cantidad
@param
@return string:cantidad de la moneda con la que se cuenta */

int Dinero::get_cantidad(){
	return cantidad;
}

/* setter de cantidad
@param int:cant
@return */

void Dinero::set_cantidad(int cant){
	cantidad=cant;
}

/* Clase Dinero_1, que hereda parametros de la clase Paisano
Contine 2 atributos extra: divisa y fondos */

class Dinero_1:public Paisano{
	
	public:
	
		/* Declaracion de variables de instancia */
	
		string divisa;
		int fondos;
	
	public:
	
		// Declaracion de todos los métodos que mi objeto tendra
		// Constructor
		// @param string nombre, int edad, string estado, string divisa, int fondos
		// @return Objeto Dinero_1
	
		Dinero_1(){};
		Dinero_1(string nombre, int edad, string estado, string div, int f): Paisano(nombre, edad, estado), divisa(div), fondos(f){};
		string get_divisa();
		int get_fondos();
		void set_divisa(string);
		void set_fondos(int);
		
};

/* Getters y Setters de la divisa y los fondos */

/* getter divisa
@param
@return string:divisa usada */

string Dinero_1::get_divisa(){
	return divisa;
}

/* setter de divisa
@param string:div
@return */

void Dinero_1::set_divisa(string div){
	divisa=div;
}

/* getter fondos
@param
@return int:fondos con los que se cuenta */

int Dinero_1::get_fondos(){
	return fondos;
}

/* setter de fondos
@param int:f
@return */

void Dinero_1::set_fondos(int f){
	fondos=f;
}

#endif //DINERO_H_