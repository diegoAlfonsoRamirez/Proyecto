/* 
Proyecto Clases y Objetos
Diego Alfonso Ramírez Montes
A01707596
04/12/20
 */

#ifndef CUENTA_H_
#define CUENTA_H_
#include <string>
#include "dinero.h"
#include <sstream>

/* Clase Cuenta VIP, que hereda parametros de la clase Dinero
Contine 1 atributo extra: intereses */

/* Declaracion de la clase Cuenta_VIP */

class Cuenta_VIP:public Dinero{
	
	public:
	
		/* Declaracion de variables de instancia */
	
		float intereses;
		
	public:
	
		// Declaracion de todos los métodos que mi objeto tendra
		// Constructor
		// @param string nombre, int edad, string nac, bool res, string mon, int cant, float inte
		// @return Objeto Cuenta_VIP
	
		Cuenta_VIP(){};
		Cuenta_VIP(string nombre, int edad, string nac, bool res, string mon, int cant, float inte): Dinero(nombre, edad, nac, res, mon, cant), intereses(inte){};
		float get_intereses();
		void set_intereses(float);
		string to_string();
		
};

/* Getters y Setters del interes */

/* getter intereses
@param
@return float:intereses generados*/

float Cuenta_VIP::get_intereses(){
	return intereses;
}

/* setter de intereses
@param float:inte
@return */

void Cuenta_VIP::set_intereses(float inte){
	intereses=inte;
}

/* Clase Cuenta VIP_1, que hereda parametros de la clase Dinero_1
Contine 1 atributo extra: intereses_1 */

class Cuenta_VIP_1:public Dinero_1{
	
	public:
	
		/* Declaracion de variables de instancia */
	
		float intereses_1;
		
	public:
	
		// Declaracion de todos los métodos que mi objeto tendra
		// Constructor
		// @param string nombre, int edad, string estado, string div, int f, float inte_1
		// @return Objeto Cuenta_VIP_1
	
		Cuenta_VIP_1(){};
		Cuenta_VIP_1(string nombre, int edad, string estado, string div, int f, float inte_1): Dinero_1(nombre, edad, estado, div, f), intereses_1(inte_1){};
		float get_intereses_1();
		void set_intereses_1(float);
		string to_string_1();
		
};

/* Getters y Setters de intereses_1 */

/* getter intereses_1
@param
@return float:intereses_1 generados*/

float Cuenta_VIP_1::get_intereses_1(){
	return intereses_1;
}

/* setter de nombre
@param string:inte_1
@return */

void Cuenta_VIP_1::set_intereses_1(float inte_1){
	intereses_1=inte_1;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Clase Cuenta, que hereda parametros de la clase Dinero
Contine 2 atributos extra: intereses_2 y tarifa */

class Cuenta:public Dinero{
	
	public:
	
		/* Declaracion de variables de instancia */
	
		float intereses_2;
		float tarifa;
		
	public:
	
/* 		Constructores
		@param string:string nombre, int edad, string nac, bool res, string mon, int cant, float inte_2, float tar
		@return Objeto Cuenta */
	
		Cuenta(){};
		Cuenta(string nombre, int edad, string nac, bool res, string mon, int cant, float inte_2, float tar): Dinero(nombre, edad, nac, res, mon, cant), intereses_2(inte_2), tarifa(tar){};
		float get_intereses_2();
		void set_intereses_2(float);
		float get_tarifa();
		void set_tarifa(float);
		string to_string_2();
		
};

/* Getters y Setters de intereses_2 y la tarifa */

/* getter intereses_2
@param
@return float:intereses_2 generados*/

float Cuenta::get_intereses_2(){
	return intereses_2;
}

/* setter de intereses_2
@param float:inte_2
@return */

void Cuenta::set_intereses_2(float inte_2){
	intereses_2=inte_2;
}

/* getter tarifa
@param
@return float:tarifa cobrada */

float Cuenta::get_tarifa(){
	return tarifa;
}

/* setter de tarifa
@param float:tar
@return */

void Cuenta::set_tarifa(float tar){
	tarifa=tar;
}

/* Clase Cuenta_1, que hereda parametros de la clase Dinero_1
Contine 2 atributos extra: intereses_3 y tarifa_1 */

class Cuenta_1:public Dinero_1{
	
	public:
	
		/* Declaracion de variables de instancia */
	
		float intereses_3;
		float tarifa_1;
		
	public:
	
		// Declaracion de todos los métodos que mi objeto tendra
		// Constructor
		// @param string nombre, int edad, string estado, string div, int f, float inte_3, float tar_1
		// @return Objeto Cuenta_1
	
		Cuenta_1(){};
		Cuenta_1(string nombre, int edad, string estado, string div, int f, float inte_3, float tar_1): Dinero_1(nombre, edad, estado, div, f), intereses_3(inte_3), tarifa_1(tar_1){};
		float get_intereses_3();
		void set_intereses_3(float);
		float get_tarifa_1();
		void set_tarifa_1(float);
		string to_string_3();
		
};

/* Getters y Setters de intereses_3 */

/* getter intereses_3
@param
@return float:intereses_3 generados */

float Cuenta_1::get_intereses_3(){
	return intereses_3;
}

/* setter de intereses_3
@param float:inte_3
@return */

void Cuenta_1::set_intereses_3(float inte_3){
	intereses_3=inte_3;
}

/* getter tarifa_1
@param
@return float:tarifa_1 cobrada*/

float Cuenta_1::get_tarifa_1(){
	return tarifa_1;
}

/* setter de tarifa_1
@param float:tar_1
@return */

void Cuenta_1::set_tarifa_1(float tar_1){
	tarifa_1=tar_1;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Cuenta_VIP
*/

string Cuenta_VIP::to_string(){
	stringstream aux;
	aux<<nombre<<", "<<edad<<" years"<<": "<<nacionalidad<<". Residencia: "<<residencia<<".\n";
	aux<<"\t\tFunds: "<<cantidad<<" "<<moneda<<".\n";
	aux<<"\t\tMonthly interest: "<<intereses*cantidad<<".\n";
	return aux.str();
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Cuenta
*/

string Cuenta::to_string_2(){
	stringstream aux_2;
	aux_2<<nombre<<", "<<edad<<" years"<<": "<<nacionalidad<<". Residencia: "<<residencia<<".\n";
	aux_2<<"\t\tFunds: "<<cantidad<<" "<<moneda<<".\n";
	aux_2<<"\t\tMonthly interest: "<<intereses_2*cantidad<<".\n";
	aux_2<<"\t\tMonthly fee: "<<tarifa*cantidad<<".\n";
	return aux_2.str();
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Cuenta_VIP_1
*/

string Cuenta_VIP_1::to_string_1(){
	stringstream aux_1;
	aux_1<<nombre<<", "<<edad<<" years"<<": "<<estado<<".\n";
	aux_1<<"\t\tFunds: "<<fondos<<" "<<divisa<<".\n";
	aux_1<<"\t\tMonthly interest: "<<intereses_1*fondos<<".\n";
	return aux_1.str();
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de Cuenta_1
*/

string Cuenta_1::to_string_3(){
	stringstream aux_3;
	aux_3<<nombre<<", "<<edad<<" years"<<": "<<estado<<".\n";
	aux_3<<"\t\tFunds: "<<fondos<<" "<<divisa<<".\n";
	aux_3<<"\t\tMonthly interest: "<<intereses_3*fondos<<".\n";
	aux_3<<"\t\tMonthly fee: "<<tarifa_1*fondos<<".\n";
	return aux_3.str();
}

#endif  //CUENTA_H_