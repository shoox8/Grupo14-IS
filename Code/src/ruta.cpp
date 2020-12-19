#include "ruta.hpp"
#include <fstream>

void RegistrarRuta(string nFichero){

    string nombre, tipo, direccion, localidad, estado,sendero;
    int duracion;
    float longitud;

    cout<<"Introduce el nombre de la Ruta: " <<endl;
    cin>>nombre;

    do{
	   cout << "Introduce el Sendero donde se encuentre la ruta: " << endl;
	   cin >> sendero;
       } while (!isValidSendero(nFichero, sendero));

    cout<<"Introduce el tipo de la Ruta: " <<endl;
    cin>>tipo;

    cout<<"Introduce la direccion de la Ruta: " <<endl;
    cin>>direccion;

    cout<<"Introduce la localidad de la Ruta: "  <<endl;
    cin>>localidad;


    cout<<"Introduce el estado de la Ruta: "  <<endl; 
    cin>>estado;

    cout<<"Introduce la duracion de la Ruta: " <<endl;
    cin>>duracion; 

    cout<<"Introduce la longitud de la Ruta: " <<endl ;
    cin>>longitud;

    

    fstream archivo;
    archivo.open(nFichero, fstream::app);
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt"<<endl;;
    }
    archivo<<endl<<"\t"<<nombre<<"\t"<<sendero<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<"\t";
    archivo.close();
}

void MostrarRuta(string nFichero){
    ifstream archivo(nFichero);
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt"<<endl;
    }
    string nombre,tipo,direccion,localidad,estado,sendero;
    int duracion;
    float longitud;

    cout << "|Nombre| \t |Sendero| \t |Tipo| \t |Direccion| \t |Localidad| \t |Estado| \t |Duracion| \t |Longitud|" <<endl;
    
    while (!archivo.eof()){
        archivo>>nombre;
        archivo>>sendero;
        archivo>>tipo;
        archivo>>direccion;
        archivo>>localidad;
        archivo>>estado;
        archivo>>duracion;
        archivo>>longitud;

        cout << "\t" << nombre << "\t" << sendero << "\t" << tipo << "\t" << direccion << "\t" << localidad << "\t" << "\t" << estado << "\t" << duracion << "\t" << longitud << "\t" << endl;
        archivo.ignore();
    }
    archivo.close();
}

void MostrarRutaMantenimiento(string nFichero){
    ifstream archivo(nFichero);
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
   
        cout << "\t |Nombre| \t |Tipo| \t |Direccion| \t |Localidad| \t |Id_ruta| \t |Estado| \t |Duracion| \t |Longitud|" <<endl;
    
        while (!archivo.eof()){
            
            archivo>>nombre;
            archivo>>tipo;
            archivo>>direccion;
            archivo>>localidad;
            archivo>>id_ruta;
            archivo>>estado;
            archivo>>duracion;
            archivo>>longitud;
            if(estado=="Mantenimiento" || estado=="mantenimiento") {
                cout << "\t" << nombre << "\t" << tipo << "\t" << direccion << "\t" << localidad << "\t" << id_ruta << "\t" << estado << "\t" << duracion << "\t" << longitud << "\t" << endl;
            }
            archivo.ignore();
            
        }
    
    archivo.close();
}


bool isValidSendero(string nombreFichero, string SenderoUser ){
    ifstream archivo(nombreFichero);
	if(!archivo.is_open()){
		cout<<"Error al abrir el fichero de sendero.txt"<<endl;
	}

	string nombre, tipo, direccion, localidad, estado,sendero;
	int duracion;
	float longitud;
	    int maxContSendero = 0;

	    while (!archivo.eof()) {
			archivo>>nombre;
			archivo>>sendero;
			archivo>>tipo;
			archivo>>direccion;
			archivo>>localidad;
			archivo>>estado;
			archivo>>duracion;
			archivo>>longitud;

	        if(sendero == SenderoUser)
	        	maxContSendero++;

	        if (maxContSendero > 10) {
	        	cout << "No se puede registrar una ruta en esta ruta" << endl;
	        	return false;
	        }

	        archivo.ignore();
		}

		archivo.close();

		return true;
}
