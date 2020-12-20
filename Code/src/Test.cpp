#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
// IMPORTAR TODOS LOS FICHEROS DEL PROYECTO
#include "sendero.hpp"
#include "monitor.hpp"
#include "ruta.hpp"


void correctEspacioNatRegistration() {
	string nombre, espacionatural, estado;
	int rutas;

	fstream archivo;
	archivo.open("test.txt", ios::out);

	if(!archivo.is_open()) {
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

	nombre = "Sendero1";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero2";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 4;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero3";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero4";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre = "Sendero5";
	espacionatural = "Cazorla";
	estado = "Disponible";
	rutas = 3;

	ASSERT_EQUAL(isValidEspacioNat("test.txt", espacionatural), false);

	archivo.close();
}

void correctRutaRegistration() {
	string nombre, tipo, direccion, localidad, estado,sendero;
	int duracion;
	float longitud;

	fstream archivo;
	archivo.open("testruta.txt", ios::out);

	if(!archivo.is_open()) {
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

	nombre = "Ruta1";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta2";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta3";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta4";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta5";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta6";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta7";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta8";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta9";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta10";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), true);
	archivo<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud;
	archivo << endl;

	nombre = "Ruta11";
	sendero = "Sendero1";
	tipo = "Bici";
	direccion = "Cazorla";
	localidad = "Jaen";
	estado = "Disponible";
	duracion = 30;
	longitud = 20;

	ASSERT_EQUAL(isValidSendero("testruta.txt", sendero), false);

	archivo.close();
}


void correctMonitorReg()
{
	//Comprobamos que un monitor no insertado no exista
	Monitor m("ale", "9", "9", 9, "Ruta");
	ASSERT(m.monitorUnico("9")==true);
	//Comprobamos que se inserta un monitor con una ruta valida
	m.registrarMonitor("monitor.txt");
	ASSERT(m.monitorUnico("9")==false);
	//Comprobamos que no se inserte un monitor que no exista pero con una ruta no valida
	Monitor m2("ale2", "19", "19", 19, "RutaNoValida");
	m2.registrarMonitor("monitor.txt");
	ASSERT(m2.monitorUnico("19")==true);
	//Borramos el monitor insertado para proximas ejecuciones del test
	ifstream archivo("monitor.txt");
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero de monitor.txt"<<endl;
    }
    ofstream archivo2("auxiliar.txt");
    if(!archivo2.is_open()){
        cout<<"Error al abrir el fichero de auxiliar.txt"<<endl;
    }

    string nombre;
    string pass;
    string dni;
    int telefono;
    string ruta;

    while (!archivo.eof()) {
        archivo>>nombre;
        archivo>>pass;
        archivo>>dni;
        archivo>>telefono;
        archivo>>ruta;

        if (dni != "9")
        {
            archivo2<<nombre<<"\t"<<pass<<"\t"<<dni<<"\t"<<telefono<<"\t"<<ruta<<endl;
        }

        if (archivo.eof()) break;

        archivo.ignore();
    }

    archivo2.close();
    archivo.close();

    remove("monitor.txt");
    rename("auxiliar.txt","monitor.txt");
}


void correctSenderotoEspacioNat(){
	string nameespacionat;

	fstream archivo;
	archivo.open("sendero.txt", ios::out);

	if(!archivo.is_open()) {cout<<"No se puedo abrir el fichero";}

	nameespacionat="Cazorla";
	ASSERT_EQUAL(EspacioNatExiste("sendero.txt", nameespacionat), true);

	nameespacionat="Cazorla";
	ASSERT_NOT_EQUAL_TO(EspacioNatExiste("sendero.txt", nameespacionat), false);

	nameespacionat="Donana";
	ASSERT_EQUAL(EspacioNatExiste("sendero.txt", nameespacionat), true);

	nameespacionat="Donana";
	ASSERT_NOT_EQUAL_TO(EspacioNatExiste("sendero.txt", nameespacionat), false);

	nameespacionat="Grazalema";
	ASSERT_EQUAL(EspacioNatExiste("sendero.txt", nameespacionat), false);

	archivo.close();

}


void correctAsignSendero(){
	string nombre, espacionatural, estado;
	int rutas;

	fstream archivo;
	archivo.open("testsendero.txt", ios::out);

	if(!archivo.is_open()) {
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

	nombre="Sendero1";
	espacionatural="Cazorla";
	estado="Disponible";
	rutas=5;

	ASSERT_EQUAL(datoCorrecto(rutas), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre="Sendero2";
	espacionatural="Cazorla";
	estado="Disponible";
	rutas=8;

	ASSERT_EQUAL(datoCorrecto(rutas), true);
	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;

	nombre="Sendero3";
	espacionatural="Cazorla";
	estado="Disponible";
	rutas=15;

	ASSERT_EQUAL(datoCorrecto(rutas), false);

	nombre="Sendero4";
	espacionatural="Cazorla";
	estado="Disponible";
	rutas=0;

	ASSERT_EQUAL(datoCorrecto(rutas), false);
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(correctEspacioNatRegistration));
	s.push_back(CUTE(correctRutaRegistration));
	s.push_back(CUTE(correctSenderotoEspacioNat));
	s.push_back(CUTE(correctAsignSendero));
	s.push_back(CUTE(correctMonitorReg));
	//s.push_back(CUTE(correctRutaReg));
	//	s.push_back(CUTE(thisIsATest));


	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
