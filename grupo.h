/* 
Proyecto Clases y Objetos
Diego Alfonso Ramírez Montes
A01707596
04/12/20
 */
 
/*
 * Clase gRUPO, maneja grupos de Cuentas, divididos en
 * Cuenta_VIP, Cuenta_VIP_1, Cuenta Y Cuenta_1
 *
 */

#ifndef GRUPO_H_
#define GRUPO_H_
#include <string>
#include "cuentas.h"

const int MAX=3; //Constante de tamaño de arreglos

class Grupo{
	
	public:
	
		/* Declaracion de variables de instancia */
	
		Cuenta_VIP Cuenta_VIPs[MAX];
		Cuenta_VIP_1 Cuenta_VIP_1s[MAX];
		Cuenta Cuentas[MAX];
		Cuenta_1 Cuenta_1s[MAX];
		
		
	public:
	
		//Constructor
	
		Grupo(){};
		
		//Metodos miembros de la clase
		
		void agregarCuenta_VIP(string nombre, int edad, string nacionalidad, bool residencia, string moneda, int cantidad, float intereses, int num_cliente);
		void agregarCuenta_VIP_1(string nombre, int edad, string estado, string divisa, int fondos, float intereses_1, int num_cliente);
		void agregarCuenta(string nombre, int edad, string nacionalidad, bool residencia, string moneda, int cantidad, float intereses_2, float tarifa, int num_cliente);
		void agregarCuenta_1(string nombre, int edad, string estado, string divisa, int fondos, float intereses_3, float tarifa_1, int num_cliente);
		string cliente_st();
		string cliente_st_1();
		string cliente_st_2();
		string cliente_st_3();
};

/* Utilziza el arreglo de tipo Cuenta_VIP
Llena el arreglo con la cantidad de cuentas registradas en el valor máximo */

void Grupo::agregarCuenta_VIP(string nombre, int edad, string nacionalidad, bool residencia, string moneda, int cantidad, float intereses, int num_cliente){
	Cuenta_VIPs[num_cliente]=Cuenta_VIP(nombre, edad, nacionalidad, residencia, moneda, cantidad, intereses);
}

/* Utilziza el arreglo de tipo Cuenta_VIP_1
Llena el arreglo con la cantidad de cuentas registradas en el valor máximo */

void Grupo::agregarCuenta_VIP_1(string nombre, int edad, string estado, string divisa, int fondos, float intereses_1, int num_cliente){
	Cuenta_VIP_1s[num_cliente]=Cuenta_VIP_1(nombre, edad, estado, divisa, fondos, intereses_1);
}

/* Utilziza el arreglo de tipo Cuenta
Llena el arreglo con la cantidad de cuentas registradas en el valor máximo */

void Grupo::agregarCuenta(string nombre, int edad, string nacionalidad, bool residencia, string moneda, int cantidad, float intereses_2, float tarifa, int num_cliente){
	Cuentas[num_cliente]=Cuenta(nombre, edad, nacionalidad, residencia, moneda, cantidad, intereses_2, tarifa);
}

/* Utilziza el arreglo de tipo Cuenta_1
Llena el arreglo con la cantidad de cuentas registradas en el valor máximo */

void Grupo::agregarCuenta_1(string nombre, int edad, string estado, string divisa, int fondos, float intereses_3, float tarifa_1, int num_cliente){
	Cuenta_1s[num_cliente]=Cuenta_1(nombre, edad, estado, divisa, fondos, intereses_3, tarifa_1);
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto a través de un ciclo for
 *
 * @param
 * @return string con los datos de Cuenta_VIP
*/

string Grupo::cliente_st(){
	stringstream aux;
		cout<<"Foreigners: "<<endl;
		cout<<"\tVIP Accounts: "<<endl;
		for(int i=1; i<2; i++){
			aux<<"\t\tClient "<<i<<" -> "<<Cuenta_VIPs[i].to_string()<<endl;
		}
		return aux.str();
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto a través de un ciclo for
 *
 * @param
 * @return string con los datos de Cuenta
*/


string Grupo::cliente_st_1(){
	stringstream aux_2;
		cout<<"\n\tNormal Accounts: "<<endl;
		for(int i=1; i<2; i++){
			aux_2<<"\t\tClient "<<i<<" -> "<<Cuentas[i].to_string_2()<<endl;
		}
		return aux_2.str();
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto a través de un ciclo for
 *
 * @param
 * @return string con los datos de Cuenta_VIP_1
*/


string Grupo::cliente_st_2(){
	stringstream aux_1;
		cout<<"Countryman: "<<endl;
		cout<<"\tVIP Accounts: "<<endl;
		for(int i=1; i<2; i++){
			aux_1<<"\t\tClient "<<i<<" -> "<<Cuenta_VIP_1s[i].to_string_1()<<endl;
		}
		return aux_1.str();
}

/*
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto a través de un ciclo for
 *
 * @param
 * @return string con los datos de Cuenta_1
*/


string Grupo::cliente_st_3(){
	stringstream aux_3;
		cout<<"\n\tNormal Accounts: "<<endl;
		for(int i=1; i<2; i++){
			aux_3<<"\t\tClient "<<i<<" -> "<<Cuenta_1s[i].to_string_3()<<endl;
		}
		return aux_3.str();
}

#endif //GRUPO_H_