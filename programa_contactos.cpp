#include <iostream>
using namespace std;
#include <fstream> //para ficheros

//funciones
string escribirArchivo();
int leerArchivo(string nombrearchivo);



int main(){
  int opcion;
  string n;
  while (opcion!=3){
    cout<<"\n---MENÚ--- "<<endl;
    cout<<"1.escribir contactos: "<<endl<<"2.Leer contactos"<<endl<<"3.SALIR\n";
    cout<<"ingrese el numero de su opción: ";
    cin>>opcion;
    cin.ignore();
    if (opcion==1){
      n = escribirArchivo();
    }
    else if (opcion==2){
      leerArchivo(n);
    }
    else if(opcion==3){
      cout<<"Fin del programa";
      break;
    }
  }

}



int leerArchivo(string nombrearchivo){
  string nombre;
  string apellido;
  string carrera;
  int edad=0;
  string r;
  string cadena;

  ifstream archivolectura;
  archivolectura.open(nombrearchivo.c_str());


  while(!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>carrera>>edad;

      if(!archivolectura.eof())
      {
        cout<<"\n**************************\n";
        cout<<"Nombre:"<<nombre<<endl;
        cout<<"Apellido:"<<apellido<<endl;
        cout<<"Carrera: "<<carrera<<endl;
        cout<<"Edad:"<<edad<<endl<<endl;
      }
    }
  archivolectura.close();

/*
  while(!archivolectura.eof()){
    archivolectura >> cadena;

    if(!archivolectura.eof()){
      cout << cadena<<" ";
    }

  }
*/

  return 0;
}




string escribirArchivo(){
  string nombre;
  string apellido;
  string carrera;
  int edad=0;
  string r;

  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre de archivo: ";
  getline(cin,nombrearchivo);
  //el getline ignora un enter para que no se salte para ingresar el nombre(solo para caraceteres)
  //cin>>nombrearchivo; no es recomendable
 // o con: while(getchar()!='\n');
  archivoprueba.open(nombrearchivo.c_str(),ios::out);

  do{
    cout<<"     Ingrese el nombre: ";
    getline(cin,nombre);
    cout<<"     Ingrese el apellido: ";
    getline(cin,apellido);
    cout<<"     Ingrese su carrera: ";
    getline(cin,carrera);
    cout<<"     Ingrese la edad: ";
    cin>>edad;

    //importante para poder leerarchivo con nombre,carrera,etc
    archivoprueba<<nombre<<" "<<apellido<<" "<<carrera<<" " <<edad<<" ";


    cout<<"\n Desea ingresar otro contacto?(s/n): ";
    cin>>r;
    cin.ignore();//ignora un enter para que no se salte para ingresar el nombre


  }
  while(r=="s");

  archivoprueba.close();

  return nombrearchivo;
}
