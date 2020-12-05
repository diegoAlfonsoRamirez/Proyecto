/* 
Proyecto Clases y Objetos
Diego Alfonso Ramírez Montes
A01707596
04/12/20
 */
 
/* Descripción: Este es el proyecto de la clase de Pensamiento Computacional Orientado a Objetos
En el se almacenan usuarios de un banco que tiene 4 tipos de cuentas diferentes, las cuales dependen
del origen del usuario y del tipo de cuenta entre la VIP y la corriente. En este caso se trata como
si un empleado del banco tuviese acceso a ver las cuentas desglosadas de diferentes formas, ya que
las mismas estan pre-definidas desde la oficina central y no se puden modificar */

#include <iostream> //para imprimir
#include <string> //para el uso de strings
using namespace std; 
#include "grupo.h" //Donde se guardan los objetos de mi programa

//Procedimiento menu

int main(){
	
/* 	Declaracion de las cuentas que existiran a partir del grupo al que pertenezcan
	ya sea extranjeros o paisanos */
	
/* 	Declaracion de las cuentas de los extranjeros */
	
	Grupo Extranjeros;
	Extranjeros.agregarCuenta_VIP("Pablo", 35, "Chinese", true, "yen(s)", 1500000, .04, 1);
	Extranjeros.agregarCuenta("Pedro", 66, "Canadian", false, "Canadian Dollar(s)", 500000, .04, .02, 1);
	
/* 	Declaracion de las cuentas de los paisanos */
	
	Grupo Paisanos;
	Paisanos.agregarCuenta_VIP_1("Juan", 27, "Guanajuato", "Mexican Peso(s)", 1000000, .04, 1);
	Paisanos.agregarCuenta_1("Ramon", 35, "Michoacan", "Mexican Peso(s)", 1000000, .04, .02, 1);
	int n, A; //Variables a usar en el ciclo while 
	bool a; //variable a usar en el ciclo while
	
	do{ //Ciclo doWhile en el que se repetira el menu hasta que el empleado solicite lo contrario
	
		//Imprime las opciones que tendrá el menu y una bienvenida
	
		cout<<"\nWelcome to our bank. \n";
		cout<<"\n1. See all clients in our banck."<<endl;
		cout<<"2. See all the foreing clients. "<<endl;
		cout<<"3. See all the country man clients. "<<endl;
		cout<<"4. See all the VIP accounts. "<<endl;
		cout<<"5. See all normal accounts. "<<endl;
		cout<<"\nPlese select an option from the ones above: ";
		cin>>n;
	
		//Casos posibles dependientes de la respuesta que haya dado el usuario
	
		switch(n){
			
			//Caso 1 donde se muestran todas las cuentas de los clientes en el banco
			
			case(1):
			cout<<"\nIf Foreigners have 0 in residence, they dont live in our country."<<endl;
			cout<<"Otherwise they live in our country.\n";
			cout<<"\n"<<Extranjeros.cliente_st();
			cout<<Extranjeros.cliente_st_1();
			cout<<Paisanos.cliente_st_2();
			cout<<Paisanos.cliente_st_3()<<endl;
			break;
			
			//Caso 2 donde se muestran todas las cuentas de los extranjeros
			
			case(2):
			cout<<"\nIf Foreigners have 0 in residence, they dont live in our country."<<endl;
			cout<<"Otherwise they live in our country.\n";
			cout<<"\n"<<Extranjeros.cliente_st();
			cout<<Extranjeros.cliente_st_1()<<endl;
			break;
			
			//Caso 3 donde se muestran todas las cuentas de los paisanos
			
			case(3):
			cout<<"\n"<<Paisanos.cliente_st_2();
			cout<<Paisanos.cliente_st_3()<<endl;
			break;
			
			//Caso 4 donde se muestran todas las cuentas VIP
			
			case(4):
			cout<<"\nIf Foreigners have 0 in residence, they dont live in our country."<<endl;
			cout<<"Otherwise they live in our country.\n";
			cout<<"\n"<<Extranjeros.cliente_st();
			cout<<Paisanos.cliente_st_2()<<endl;
			break;
			
			//Caso 5 donde se muestran todas las cuentas corrientes
			
			case(5):
			cout<<"\n"<<Extranjeros.cliente_st_1();
			cout<<Paisanos.cliente_st_3()<<endl;
			break;
			
			//Default donde saca al empleado del sistema por no ingresar una opcion existente
			
			default:
			cout<<"\nERROR INVALID OPTION.";
			break;
		}
	
	system("PAUSE"); //Deja el sistema en pausa hasta que el usuario presione una tecla
	system("cls"); //Limpia la pantalla de todos los datos anteriores
	cout<<"Do you want to continue?: "<<endl; //Pregunta al empleado si desea continuar desglosando info
	cout<<"1. Yes."<<endl;
	cout<<"2. No"<<endl;
	cin>>A;
	
	/*Ciclo if donde se decide si el empleado desea continuar, de no ser así,
	se cambia una variable booleana que niega el ciclo dowhile y lo termina*/

	if(A==1){
		a=true;
	}if(A==2){
		a=false;
	}else{
		cout<<"\nERROR. INVALID VARIABLE ENDING PROGRAM.\n";
		a=false;
		system("PAUSE");
	}
	system("cls"); //Limpia la pantalla de datos anteriores
	}while(a); //Ciclo dowhile
}