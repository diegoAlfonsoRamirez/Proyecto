# Proyecto
Este es el proyecto de la clase de Pensamiento Computacional Orientado a Objetos
En el se almacenan usuarios de un banco que tiene 4 tipos de cuentas diferentes, las cuales dependen
del origen del usuario y del tipo de cuenta entre la VIP y la corriente. En este caso se trata como
si un empleado del banco tuviese acceso a ver las cuentas desglosadas de diferentes formas, ya que
las mismas estan pre-definidas desde la oficina central y no se puden modificar.
# Funcionalidad
El programa solamente permite visualizar las cuentas que se definan desde el mismo programa, no se puede introducir
una nueva (Esto se hace desde la oficina central y se trabaja bajo el supuesto de que somos empleados comunes).
# Estructura
Es necesario contar con todos los archivos ".h" que se encuentran en el repositorio, además del main.cpp por supuesto.
# Casos de prueba
Para el caso: 

Welcome to our bank.

1. See all clients in our banck.
2. See all the foreing clients.
3. See all the country man clients.
4. See all the VIP accounts.
5. See all normal accounts.

Plese select an option from the ones above: 1

If Foreigners have 0 in residence, they dont live in our country.
Otherwise they live in our country.

Foreigners:
        VIP Accounts:
                Client 1 -> Pablo, 35 years: Chinese. Residencia: 1.
                Funds: 1500000 yen(s).
                Monthly interest: 60000.


        Normal Accounts:
                Client 1 -> Pedro, 66 years: Canadian. Residencia: 0.
                Funds: 500000 Canadian Dollar(s).
                Monthly interest: 20000.
                Monthly fee: 10000.

Countryman:
        VIP Accounts:
                Client 1 -> Juan, 27 years: Guanajuato.
                Funds: 1000000 Mexican Peso(s).
                Monthly interest: 40000.


        Normal Accounts:
                Client 1 -> Ramon, 35 years: Michoacan.
                Funds: 1000000 Mexican Peso(s).
                Monthly interest: 40000.
                Monthly fee: 20000.


Presione una tecla para continuar . . .

Do you want to continue?:
1. Yes.
2. No
2
*Finaliza programa*
# Consideraciones
El programa solo corre en consola, esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ proyecto_main.cpp"

correr en linux: "/a.out"

correr en windows:"a.exe"
# Correcciones
Se corrigio y volvio arealizar todo el programa desde 0, junto con el UML que se volvio a realizar
