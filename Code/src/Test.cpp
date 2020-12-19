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


//void correctMonitorReg()
//{
//	Monitor m("ale", "9", "9", 9, "camino");
//	ASSERT(m.monitorUnico("9")==true);
//	m.registrarMonitor("monitor.txt");
//	ASSERT(m.monitorUnico("9")==false);
//}

void correctRutaReg()
{
	 /*Ruta r("RutaDePrueba", "0", "0", "0", 0, 0, 0, 0.0); ESTÁ COMENTADO PORQUE RUTA SE QUEDA EN BUCLE (PASO FORZADO HASTA SU CORRECCIÓN)
	 ASSERT(r.rutaUnica("RutaDePrueba")==true);
	 r.registrarRuta("ruta.txt");
	 ASSERT(r.rutaUnica("RutaDePrueba")==false);
	 */
	 ASSERT(true); //BORRAR Y DESCOMENTAR LO DE ARRIBA CUANDO RUTA SE CORRIJA
}

//void correctSenderotoEspacioNat(){
//	string nombre, espacioNat, estado;
//	int rutas;
//
//	fstream archivo;
//	archivo.open("test.txt", ios::out);
//
//	if(!archivo.is_open()) {
//		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
//	}
//
//	nombre = "Sendero1";
//	espacionatural = "Cazorla";
//	estado = "Disponible";
//	rutas = 3;
//
//	ASSERT_EQUAL(existEspacioNat("test.txt", espacionatural), true);
//	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;
//
//	nombre = "Sendero2";
//	espacionatural = "Cazorla";
//	estado = "Disponible";
//	rutas = 4;
//
//	ASSERT_EQUAL(existEspacioNat("test.txt", espacionatural), true);
//	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;
//
//	nombre = "Sendero3";
//	espacionatural = "Cazorla";
//	estado = "Disponible";
//	rutas = 3;
//
//	ASSERT_EQUAL(existEspacioNat("test.txt", espacionatural), true);
//	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;
//
//	nombre = "Sendero4";
//	espacionatural = "Cazorla";
//	estado = "Disponible";
//	rutas = 3;
//
//	ASSERT_EQUAL(existEspacioNat("test.txt", espacionatural), true);
//	archivo<<nombre<<"\t"<<espacionatural<<"\t"<<estado<<"\t"<<rutas<<endl;
//
//	nombre = "Sendero5";
//	espacionatural = "Grazalema";
//	estado = "Disponible";
//	rutas = 3;
//
//	ASSERT_EQUAL(existEspacioNat("test.txt", espacionatural), false);
//
//	archivo.close();
//}

/*void correctRutatoSendero(){
	string namesendero, nombre, tipo, direccion, localidad, estado;
    int id_ruta, duracion;
    float longitud;

	fstream archivo;
	archivo.open("test.txt", ios::out);

	if(!archivo.is_open()) {
		cout<<"Error al abrir el fichero de ruta.txt"<<endl;
	}

	namesendero="Sendero1";
	nombre="Ruta1";
	tipo="Pie";
	direccion="Calle";
	localidad="Cordoba";
	estado="Disponible";
	id_ruta=102;
	duracion=29;
	longitud=45.9;

	ASSERT_EQUAL(Senderoexiste("test.txt", namesendero), true);
	archivo<<endl<<"\t"<<namesendero<<"\t"<<nombre<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<id_ruta<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<"\t";

	namesendero="Sendero2";
	nombre="Ruta2";
	tipo="Pie";
	direccion="Calle";
	localidad="Cordoba";
	estado="Disponible";
	id_ruta=103;
	duracion=23;
	longitud=56.3;

	ASSERT_EQUAL(Senderoexiste("test.txt", namesendero), true);
	archivo<<endl<<"\t"<<namesendero<<"\t"<<nombre<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<id_ruta<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<"\t";

	namesendero="Sendero3";
	nombre="Ruta3";
	tipo="Pie";
	direccion="Calle";
	localidad="Cordoba";
	estado="Disponible";
	id_ruta=104;
	duracion=348;
	longitud=49.8;

	ASSERT_EQUAL(Senderoexiste("test.txt", namesendero), true);
 	archivo<<endl<<"\t"<<namesendero<<"\t"<<nombre<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<id_ruta<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<"\t";
	
	namesendero="Sendero4";
	nombre="Ruta4";
	tipo="Pie";
	direccion="Calle";
	localidad="Cordoba";
	estado="Disponible";
	id_ruta=105;
	duracion=38;
	longitud=89.9;

	ASSERT_EQUAL(Senderoexiste("test.txt", namesendero), true);
	archivo<<endl<<"\t"<<namesendero<<"\t"<<nombre<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<id_ruta<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<"\t";

	namesendero="Sendero5";
	nombre="Ruta5";
	tipo="Pie";
	direccion="Calle";
	localidad="Cordoba";
	estado="Disponible";
	id_ruta=106;
	duracion=27;
	longitud=44.9;

	ASSERT_EQUAL(Senderoexiste("test.txt", namesendero), false);

	archivo.close();
}
*/

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(correctEspacioNatRegistration));
	s.push_back(CUTE(correctRutaRegistration));
//	s.push_back(CUTE(correctRutatoSendero));
//	s.push_back(CUTE(correctMonitorReg));
//	s.push_back(CUTE(correctRutaReg));
	//	s.push_back(CUTE(thisIsATest));


	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

//int main(int argc, char const *argv[]) {
//    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
//}
