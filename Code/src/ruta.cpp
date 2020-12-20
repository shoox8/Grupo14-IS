#include "ruta.hpp"
#include <fstream>

void RegistrarRuta(string nFichero){

    string sendero, nombre, tipo, direccion, localidad, estado;
    int duracion;
    float longitud;

    
    do{
	   cout << "Introduce el Sendero donde se encuentre la ruta: " << endl;
	   cin >> sendero;
       } while (!isValidSendero(nFichero, sendero) || !Senderoexiste("sendero.txt", namesendero));
	
	cout<<"Introduce el nombre de la Ruta: " <<endl;
    cin>>nombre;
	
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
    archivo<<endl<<"\t"<<sendero<<"\t"<<nombre<<"\t"<<tipo<<"\t"<<direccion<<"\t"<<localidad<<"\t"<<estado<<"\t"<<duracion<<"\t"<<longitud<<"\t";
    archivo.close();
}

void MostrarRuta(string nFichero){
    ifstream archivo(nFichero);
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt"<<endl;
    }
    string sendero;
    string nombre;
    string tipo;
    string direccion;
    string localidad;
    string estado;
    int duracion;
    float longitud;

    cout << "|Sendero| \t |Nombre| \t |Tipo| \t |Direccion| \t |Localidad| \t |Estado| \t |Duracion| \t |Longitud|" <<endl;
    
    while (!archivo.eof()){
        archivo>>sendero;
        archivo>>nombre;
        archivo>>tipo;
        archivo>>direccion;
        archivo>>localidad;
        archivo>>estado;
        archivo>>duracion;
        archivo>>longitud;

        cout << "\t" <<sendero<<"\t"<< nombre << "\t" << tipo << "\t" << direccion << "\t" << localidad << "\t" << estado << "\t" << duracion << "\t" << longitud << "\t" << endl;
        archivo.ignore();
    }
    archivo.close();
}

void MostrarRutaMantenimiento(string nFichero){
    ifstream archivo(nFichero);
    if(!archivo.is_open()){
        cout<<"Error al abrir el fichero ruta.txt"<<endl;
    }
    string sendero;
    string nombre;
    string tipo;
    string direccion;
    string localidad;
    string estado;
    int duracion;
    float longitud;
   
        cout << "  |Sendero|  |Nombre|  |Tipo|  |Direccion|  |Localidad|  |Estado|  |Duracion|  |Longitud|" <<endl;
    
        while (!archivo.eof()){
            archivo>>sendero;
            archivo>>nombre;
            archivo>>tipo;
            archivo>>direccion;
            archivo>>localidad;
            archivo>>estado;
            archivo>>duracion;
            archivo>>longitud;
            if(estado=="Mantenimiento" || estado=="mantenimiento") {
                cout << "\t" <<sendero<<"\t"<< nombre << "\t" << tipo << "\t" << direccion << "\t" << localidad << "\t" << estado << "\t" << duracion << "\t" << longitud << "\t" << endl;
            }
            archivo.ignore();
            
        }
    
    archivo.close();
}
bool Senderoexiste(string nFichero, string namesendero){
    bool res=false;
    ifstream fichero(nFichero);
    if (!fichero) cout<<"No se pudo abrir el fichero";

    string sendero;

    while(!fichero.eof()){
        fichero>>sendero;
        

        if(sendero==namesendero) res=true;
        
    }
    fichero.close();
    return res;


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

