#include <iostream>
#include<stdlib.h>

using namespace std;

class Documentos {
public:

	int check;
	int puntos;


	struct pasaporte {
		string nombre;
		string nacimiento;
		string sexo;
		string curp;
	}
		pasaporte1 = { "Patricia Gonzalez Bonilla", "14/06/1990", "femenino","GOBP900614MJCNNT05" },
		pasaporte2 = { "Nicolas Salazar Solano", "29/10/1984", "masculino", "SASN841029HJCLLC06" },
		pasaporte3 = { "Luna Herrera Mendes", "08/04/1998", "femenino", "HEML980408MJCRNN01" },
		pasaporte4 = { "Alejandro Perez Arreola", "12/09/1989", "masculino", "PEAA890912HJCRRL02" },
		pasaporte5 = { "Camila Lopez Guerrera", "18/12/2001", "femenino", "LOGC011218MJCPRMA3" };

	struct INE {
		string nombre;
		string nacimiento;
		string sexo;
		string curp;
	}
		ine1 = { "Patricia Gonzalez Bonilla", "14/06/1990", "femenino","GOBP900614MJCNNT05" },
		ine2 = { "Nicolas Salazar Solano", "29/10/1884", "masculino", "SASN841029HJCLLC06" },
		ine3 = { "Luna Herrera Mendes", "08/04/1998", "femenino", "HEML980408MJCRNN01" },
		ine4 = { "Alejandro Peerez Arreola", "12/09/1989", "masculino", "PEAA890912HJCRRL02" },
		ine5 = { "Camila Lopez Guerrera", "18/12/2001", "femenino", "LOGC011218MJCPRMA3" };

	void check_Info0() {

		cout << "\n1- APROBADA" << endl;
		cout << "2- DENEGADA" << endl;
		cin >> check;

		if (check == 1) {
			cout << "Deteccion correcta" << endl;
			cout << "Buen trabajo :)\n" << endl;
			puntos = 0;
			puntos = puntos + 1;
		}
		else {
			cout << "Aprobaste el acceso a una personas con discrepancias en sus papales" << endl;
			cout << "Tenga mas cuidado agente :(\n" << endl;
			puntos = 0;
			puntos = puntos - 1;
		}
	}

	void check_Info1() {

		cout << "\n1- APROBADA" << endl;
		cout << "2- DENEGADA" << endl;
		cin >> check;

		if (check == 1) {
			cout << "Aprobaste el acceso a una personas con discrepancias en sus papales" << endl;
			cout << "Tenga mas cuidado agente :(\n" << endl;
			puntos = puntos - 1;

		}
		else {
			cout << "Deteccion correcta" << endl;
			cout << "Buen trabajo :)\n" << endl;
			puntos = puntos + 1;
		}
	}

	void check_Info2() {

		cout << "\n1- APROBADA" << endl;
		cout << "2- DENEGADA" << endl;
		cin >> check;

		if (check == 1) {
			cout << "Deteccion correcta" << endl;
			cout << "Buen trabajo :)\n" << endl;
			puntos = puntos + 1;
		}
		else {
			cout << "Aprobaste el acceso a una personas con discrepancias en sus papales" << endl;
			cout << "Tenga mas cuidado agente :(\n" << endl;
			puntos = puntos - 1;
		}
	}

	void check_Info3() {

		cout << "\n1- APROBADA" << endl;
		cout << "2- DENEGADA" << endl;
		cin >> check;

		if (check == 1) {
			cout << "Aprobaste el acceso a una personas con discrepancias en sus papales" << endl;
			cout << "Tenga mas cuidado agente :(\n" << endl;
			puntos = puntos - 1;

		}
		else {
			cout << "Deteccion correcta" << endl;
			cout << "Buen trabajo :)\n" << endl;
			puntos = puntos + 1;
		}

	}
	
	void check_Info4() {

		cout << "\n1- APROBADA" << endl;
		cout << "2- DENEGADA" << endl;
		cin >> check;

		if (check == 1) {
			cout << "Aprobaste el acceso a un TERRORISTA\n" << endl;
			cout << "Tenga mas cuidado agente :(\n" << endl;
			puntos = puntos - 2;

		}
		else {
			cout << "Deteccion correcta" << endl;
			cout << "Buen trabajo, has detectado al TERRORISTA :)\n" << endl;
			puntos = puntos + 2;
		}

	}

	void printScore() {
		cout << "\n\nSu puntaje final es: "<< puntos << endl;
	}

};

class INE : public Documentos {
public:
	void printPatINE();
	void printNicINE();
	void printLunaINE();
	void printAlexINE();
	void printCamINE();
};

void INE::printPatINE() {
	cout << "********************************************\n" << endl;
	cout << "**** BIENVENIDO A LA GLORIOSA ARSTOTZKA ****\n" << endl;
	cout << "********************************************\n" << endl;
	cout << "************** BORDER CONTROL **************\n" << endl;
	cout << "**** Por favor tenga sus papeles listos ****\n" << endl;
	cout << "********************************************\n\n" << endl;
	system("pause");
	system("cls");

	cout << "*******************" << endl;
	cout << "****NIVEL: 1   ****" << endl;
	cout << "*******************\n\n" << endl;
	cout << "        INE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << ine1.nombre << endl;
	cout << "Fecha de nacimiento: " << ine1.nacimiento << endl;
	cout << "CURP: " << ine1.curp << endl;
	cout << "Sexo: " << ine1.sexo << endl;

	cout << "\n";
}

void INE::printNicINE() {
	cout << "*******************" << endl;
	cout << "****NIVEL: 2   ****" << endl;
	cout << "*******************\n\n" << endl;
	cout << "        INE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << ine2.nombre << endl;
	cout << "Fecha de nacimiento: " << ine2.nacimiento << endl;
	cout << "CURP: " << ine2.curp << endl;
	cout << "Sexo: " << ine2.sexo << endl;

	cout << "\n";

}

void INE::printLunaINE() {
	cout << "*******************" << endl;
	cout << "****NIVEL: 3   ****" << endl;
	cout << "*******************\n\n" << endl;
	cout << "        INE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << ine3.nombre << endl;
	cout << "Fecha de nacimiento: " << ine3.nacimiento << endl;
	cout << "CURP: " << ine3.curp << endl;
	cout << "Sexo: " << ine3.sexo << endl;

	cout << "\n";

}

void INE::printAlexINE() {
	cout << "*******************" << endl;
	cout << "****NIVEL: 4   ****" << endl;
	cout << "*******************\n\n" << endl;
	cout << "        INE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << ine4.nombre << endl;
	cout << "Fecha de nacimiento: " << ine4.nacimiento << endl;
	cout << "CURP: " << ine4.curp << endl;
	cout << "Sexo: " << ine4.sexo << endl;

	cout << "\n";

}

void INE::printCamINE() {
	cout << "*******************" << endl;
	cout << "****NIVEL: 5   ****" << endl;
	cout << "*******************\n\n" << endl;
	cout << "        INE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << ine5.nombre << endl;
	cout << "Fecha de nacimiento: " << ine5.nacimiento << endl;
	cout << "CURP: " << ine5.curp << endl;
	cout << "Sexo: " << ine5.sexo << endl;

	cout << "\n";

}


class Pasaporte : public Documentos {
public:
	void printPatPass();
	void printNicPass();
	void printLunaPass();
	void printAlexPass();
	void printCamPass();

};

void Pasaporte::printPatPass() {
	cout << "     PASAPORTE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << pasaporte1.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte1.nacimiento << endl;
	cout << "CURP: " << pasaporte1.curp << endl;
	cout << "Sexo: " << pasaporte1.sexo << endl;

	check_Info0();
	system("pause");
	system("cls");
}

void Pasaporte::printNicPass() {
	cout << "     PASAPORTE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << pasaporte2.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte2.nacimiento << endl;
	cout << "CURP: " << pasaporte2.curp << endl;
	cout << "Sexo: " << pasaporte2.sexo << endl;

	check_Info1();
	system("pause");
	system("cls");
}

void Pasaporte::printLunaPass() {
	cout << "     PASAPORTE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << pasaporte3.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte3.nacimiento << endl;
	cout << "CURP: " << pasaporte3.curp << endl;
	cout << "Sexo: " << pasaporte3.sexo << endl;

	check_Info2();
	system("pause");
	system("cls");
}

void Pasaporte::printAlexPass() {
	cout << "     PASAPORTE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << pasaporte4.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte4.nacimiento << endl;
	cout << "CURP: " << pasaporte4.curp << endl;
	cout << "Sexo: " << pasaporte4.sexo << endl;

	check_Info3();
	system("pause");
	system("cls");
}

void Pasaporte::printCamPass() {
	cout << "     PASAPORTE" << endl;
	cout << "___________________\n" << endl;
	cout << "Nombre: " << pasaporte5.nombre << endl;
	cout << "Fecha de nacimiento: " << pasaporte5.nacimiento << endl;
	cout << "CURP: " << pasaporte5.curp << endl;
	cout << "Sexo: " << pasaporte5.sexo << endl;

	check_Info4();
	system("pause");

	system("cls");
	printScore();

}
int main() {

	INE ine;
	Pasaporte pasaporte;

	ine.printPatINE();
	pasaporte.printPatPass();

	ine.printNicINE();
	pasaporte.printNicPass();

	ine.printLunaINE();
	pasaporte.printLunaPass();

	ine.printAlexINE();
	pasaporte.printAlexPass();

	ine.printCamINE();
	pasaporte.printCamPass();


	return 0;
}