#include <iostream>
using namespace std;

class Banco{
	private:
		string nombre1;
		int fondos;
	
	public:
		Banco(string, int);
		void balance();
};

class Persona{
	private:
		string nombre;
		int edad;
		
	public:
		Persona(string, int);
		void depositar();
		void transferir();
};

class Dinero{
	private:
		int cantidad;
		string tipo;
		
	public:
		Dinero(int, string);
		void consultar();
};

Banco::Banco(string _nombre1, int _fondos){
	nombre1= _nombre1;
	fondos= _fondos;
}

void Banco::balance(){
	cout<<"Su saldo total en el banco "<<nombre1<<" es de "<<fondos<<"."<<endl;
}

Persona::Persona(string _nombre, int _edad){
	nombre= _nombre;
	edad= _edad;
}

void Persona::depositar(){
	cout<<"Usted está depositando a "<<nombre<<" de edad "<<edad<<" años."<<endl;
}

void Persona::transferir(){
	cout<<nombre<<" de edad "<<edad<<" años, le ha depositado."<<endl;
}

Dinero::Dinero(int _cantidad, string _tipo){
	cantidad= _cantidad;
	tipo= _tipo;
}

void Dinero::consultar(){
	cout<<"Usted tiene "<<cantidad<<" "<<tipo<<" en su cuenta."<<endl;
}

int main(){
	Persona p1= Persona("Juan", 35);
	p1.transferir();
	
	Persona p2= Persona("Roberto", 19);
	p2.depositar();
	
	Banco b= Banco("Banorte", 1500000);
	b.balance();
	
	Dinero d= Dinero(50000, "euros");
	d.consultar();
	
	system("pause");
	return 0;
}