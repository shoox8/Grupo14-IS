#include "monitor.hpp"
#include <fstream>
void Monitor::mostrarMonitor()
{	

	ifstream archivo("monitor.txt");
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de monitor.txt"<<endl;
	}

	string nombre;
	string pass;
	string dni;
	int telefono;
	string ruta;

    cout<< "| Nombre | \t | Pass | \t | Dni | \t | Telefono | \t | Ruta |" <<endl;
    while (!archivo.eof()) {
		archivo>>nombre;
		archivo>>pass;
		archivo>>dni;
        archivo>>telefono;
        archivo>>ruta;
	if (archivo.eof()) break;
		cout << "|" <<nombre << "| \t |" <<pass << "| \t |" << dni << "| \t |" << telefono << "| \t |" << ruta << "|"<< endl;
        archivo.ignore();
	}
	archivo.close(); //Cerramos el archivo.
}

void Monitor::registrarMonitor(string nombreFichero)
{

    if (!monitorUnico(_dni))
    {
        cout << "El monitor que desea registrar ya existe" << endl;
        return;
    }

    if (!rutaValida(_ruta))
    {
        cout << "La ruta deseada no es válida" << endl;
        return;
    }

    fstream archivo;
    archivo.open(nombreFichero,fstream::app);

	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de monitor.txt"<<endl;
	}

    archivo<<_nombre<<"\t"<<_pass<<"\t"<<_dni<<"\t"<<_telefono<<"\t"<<_ruta<<endl;
    archivo.close();
}

bool Monitor::monitorUnico(string id)
{

    ifstream archivo("monitor.txt");
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero de monitor.txt"<<endl;
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

        if (dni == id)
        {
            archivo.ignore();
            archivo.close();
            return false;
        }

        if (archivo.eof()) break;

        archivo.ignore();
    }
    archivo.close();
    return true;

}

bool Monitor::rutaValida(string ruta)
{
    ifstream archivo("ruta.txt");
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt"<<endl;
    }
    string nombre;
    string tipo;
    string direccion;
    string localidad;
    int id_ruta;
    string estado;
    int duracion;
    float longitud;

    //cout << "|Nombre| \t |Tipo| \t |Direccion| \t |Localidad| \t |Id_ruta| \t |Estado| \t |Duracion| \t |Longitud|" <<endl;
    
    while (!archivo.eof()){
        archivo>>nombre;
        archivo>>tipo;
        archivo>>direccion;
        archivo>>localidad;
        archivo>>id_ruta;
        archivo>>estado;
        archivo>>duracion;
        archivo>>longitud;

        if (ruta == nombre)
        {
            archivo.ignore();
            archivo.close();
            return true;
        }

        if (archivo.eof()) break;

        //cout << "\t" << nombre << "\t" << tipo << "\t" << direccion << "\t" << localidad << "\t" << id_ruta << "\t" << estado << "\t" << duracion << "\t" << longitud << "\t" << endl;
        archivo.ignore();
    }
    archivo.close();
    return false;
}

void Monitor::pedirMonitor()
{

    cout << "Introduce el nombre del monitor: " << endl;
    cin >> _nombre;

    cout << "Introduce el password del monitor: " << endl;
    cin >> _pass;

    cout << "Introduce el dni del mostrarMonitor: " << endl;
    cin >> _dni;

    cout << "Introduce el telefono del monitor: " << endl;
    cin >> _telefono;

    cout << "Introduce la ruta del monitor: " << endl;
    cin >> _ruta;
}

void programarRuta(string nombreFichero){

		Monitor aux;
	    int idruta;
	    string tipo;
	    string fecha;
	    string hora;
	    int npersonas;
	    int duracion;
	    float longitud;

	    cout << "Introduce el id de la Ruta: " << endl;
	    cin >> idruta;

	    cout << "Introduce el tipo de Ruta: " << endl;
	    cin >> tipo;

	    cout << "Introduce la fecha en la que se realizara la Ruta: " << endl;
	    cin >> fecha;

	    cout << "Introduce la hora a la que se realizara la Ruta: " << endl;
	    cin >> hora;

	    cout << "Introduce el numero de personas que asistiran Ruta: " << endl;
	    cin >> npersonas;

	    cout << "Introduce la duracion (en horas) de la Ruta: " << endl;
	    cin >> duracion;

	    cout << "Introduce la longitud (en kilometros) de la Ruta: " << endl;
	    cin >> longitud;


	    fstream archivo;
	    archivo.open(nombreFichero,fstream::app);

		if(!archivo.is_open()){
			cout<<"Error al abrir el fichero de programacion.txt"<<endl;
		}

	    archivo<<idruta<<"\t"<<tipo<<"\t"<<fecha<<"\t"<<hora<<"\t"<<npersonas<<"\t"<<duracion<<"\t"<<longitud<<"\n";
	    archivo.close();
}

void mostrarProgramacion(string nombreFichero)
{

	ifstream archivo(nombreFichero);
		if(!archivo.is_open()){
			cout<<"Error al abrir el fichero de sendero.txt"<<endl;
		}

		int idruta;
		string tipo;
	    string fecha;
		string hora;
		int npersonas;
	    int duracion;
	    float longitud;

	    	cout<< "| ID Ruta | \t | Tipo | \t | Fecha | \t | Hora | \t | Numero Personas| \t | Duracion | \t | Longitud |" <<endl;
	    while (!archivo.eof()) {
			archivo>>idruta;
			archivo>>tipo;
			archivo>>fecha;
	        archivo>>hora;
	        archivo>>npersonas;
	        archivo>>duracion;
	        archivo>>longitud;
			cout << "|" << idruta << "| \t |" << tipo << "| \t |" << fecha << "| \t |" << hora << "| \t |" << npersonas << "| \t |" << duracion << "| \t |" << longitud << "|" << endl;
	        archivo.ignore();
		}
		archivo.close();
}
