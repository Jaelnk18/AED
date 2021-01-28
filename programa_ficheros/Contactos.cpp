#include <iostream>
using namespace std;

#include <fstream>

void escribirArchivo();
void leerArchivo();

int main() 
{
  escribirArchivo();
  leerArchivo();

}

void escribirArchivo()
{
  string nombre;
  string apellido;
  int edad;
  char r;
  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre del archivo: ";
  //while(getchar()!='\n');  
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(),ios::out);
  do
  {
    cout<<"\t Ingrese el nombre:";
    getline(cin,nombre); 
    cout<<"\t Ingrese el apellido:";
    getline(cin,apellido); 
    cout<<"\t Ingrese la edad:";
    cin>>edad;

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<endl;

    cout<<"Desea ingresar otro contacto s/n ";

    cin>>r;

    cin.ignore();
  }
  while(r=='s');

  archivoprueba.close();

}




void leerArchivo()
{
  string nombre;
  string apellido;
  int edad;
  
  ifstream archivolectura("libreta.txt");
  string texto;
  while(!archivolectura.eof())
    {
      archivolectura>>nombre>>apellido>>edad;

      if(!archivolectura.eof())
            {
              cout<<"Nombre:"<<nombre<<endl;
              cout<<"Apellido:"<<apellido<<endl;
              cout<<"Edad:"<<edad<<endl;
            }
    }
  archivolectura.close();
}
/*
int main() 
  string nombre;
  string apellido;
  int edad=0;
  string r;

  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre de archivo: ";
  getline(cin,nombrearchivo);
  //el getline ignora un enter para que no se salte para ingresar el nombre
  //cin>>nombrearchivo; no es recomendable 
 // o con getchar
  archivoprueba.open(nombrearchivo.c_str(),ios::out);

  do{
    cout<<"Ingrese el nombre: ";
    getline(cin,nombre);
    cout<<"Ingrese el apellido: ";
    getline(cin,apellido);
    cout<<"Ingrese la edad: ";
    cin>>edad;

    archivoprueba<<nombre<<" "<<apellido<<" "<<edad;
    cout<<"\n Desea ingresar otro contacto?(s/n): ";
    cin>>r;
    cin.ignore();//ignora un enter para que no se salte para ingresar el nombre


  } 
  while(r=="s");

  archivoprueba.close();

}
*/