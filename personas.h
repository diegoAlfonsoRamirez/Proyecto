/* 
Proyecto Clases y Objetos
Diego Alfonso Ramírez Montes
A01707596
04/12/20
 */
/* 
Clase persona que contiene los atributos de 2 subclases
Paisano
Extranjero
Junto con los métodos necesarios, como sus nombres, edades, nacionalidades, residencias y estados de origen
 */

#ifndef PERSONAS_H_
#define PERSONAS_H_
#include <string>
#include <sstream>

/* Declaración de la clase Persona */

class Persona{
	
	public:
		/* Declaración de las variables de instancia */
		
		string nombre;
		int edad;
		
	public:
/* 		Declaración de los métodos que mi objeto tendra
		Constructores
		@Param
		@return Objeto Persona */
		
		Persona(){};
		Persona(string nom, int ed): nombre(nom), edad(ed){};
 		string get_nombre();
		int get_edad();
		void set_nombre(string nombre);
		void set_edad(int edad);
		
};

/* Getters y Setters del nombre y edad */

/* getter nombre
@param
@return string:nombre de la persona */

string Persona::get_nombre(){
	return nombre;
}

/* setter de nombre
@param string:nom
@return */

void Persona::set_nombre(string nom){
	nombre=nom;
}

/* getter edad
@param
@return int:edad de la persona */

int Persona::get_edad(){
	return edad;
}

/* setter de edad
@param int:ed
@return */

void Persona::set_edad(int ed){
	edad=ed;
}

/* Declaración de la subclase Extranjero de la clase Persona */

class Extranjero:public Persona{
	
	public:
	
		/* Declaración de las variables de instancia */
		
		string nacionalidad;
		bool residencia;
	
	public:
		
/* 		Constructores
		@param string:nombre int:edad string:nacionalidad bool residencia
		@return Objeto Persona */
	
		Extranjero(){};
		Extranjero(string nombre, int edad, string nac, bool res): Persona(nombre, edad), nacionalidad(nac), residencia(res){};
		void set_residencia(bool);
		string to_string();
		
};

/* Declaración de la subclase Paisano de la clase Persona */

class Paisano:public Persona{
	
	public:	
	
		/* Declaración de las variables de instancia */
		
		string estado;

	public:
	
/* 		Constructores
		@param string:nombre int:edad string:estado
		@return Objeto Persona */
		
		Paisano(){};
		Paisano(string nombre, int edad, string est): Persona(nombre, edad), estado(est){};
		void set_estado(string);
		string to_string_1();
	
};

#endif //PERSONAS_H_