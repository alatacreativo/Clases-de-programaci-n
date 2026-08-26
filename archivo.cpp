#include <iostream>
using namespace std;

//Definición Personaje 1
string nombre1 = "Delfin Quishpe";
int vida1 = 500;
int edad1 = 48;
bool Nupcias1 = true;
float rating1 = 2.36;

//Definición Personaje 2
string nombre2 = "Tigresa del Oriente";
int vida2 = 500;
int edad2 = 80;
bool Nupcias2 = false;
float rating2 = 4.00;


int main() {
  cout << "Estatus Inicial" << endl;
  cout << "---------------------"<< endl;
    cout << "    "<< endl;


     cout << "Ficha Tecnica 1" << endl;
     cout << "    "<< endl;
     cout << "Nombre Personaje"<< nombre1 << endl;
     cout << "Vida: "<< vida1 << endl;
     cout << "Edad: "<< edad1 << endl;
     cout << "Estado Marital: "<< Nupcias1 << endl;
     cout << "Rating: "<< rating1 << endl;

 cout << "    "<< endl;
 cout << "    "<< endl;


  cout << "Ficha Tecnica 2" << endl;
     cout << "    "<< endl;
     cout << "Nombre Personaje: "<< nombre2 << endl;
     cout << "Vida: "<< vida2 << endl;
     cout << "Edad: "<< edad2 << endl;
     cout << "Estado Marital: "<< Nupcias2 << endl;
     cout << "Rating: "<< rating2 << endl;

 cout << "    "<< endl;
 cout << "======================="<< endl;
 cout << "    "<< endl;

 //vida final 1
int vidaFinal1 = 0;
vidaFinal1 = vida1 - rating2;
vida1 = vidaFinal1;

//vida final 2
int vidaFinal2 = 0;
vidaFinal2 = vida2 - rating1;
vida2 = vidaFinal2;

  cout << "Estatus Final" << endl;
  cout << "---------------------"<< endl;
    cout << "    "<< endl;

     cout << "Ficha Tecnica 1" << endl;
     cout << "    "<< endl;
     cout << "Nombre Personaje: "<< nombre1 << endl;
     cout << "Vida: "<< vidaFinal1 << endl;
     cout << "Edad: "<< edad1 << endl;
     cout << "Estado Marital: "<< Nupcias1 << endl;
     cout << "Rating: "<< rating1 << endl;

  cout << "    "<< endl;
  cout << "    "<< endl;


  cout << "Ficha Tecnica 2" << endl;
     cout << "    "<< endl;
     cout << "Nombre Personaje: "<< nombre2 << endl;
     cout << "Vida: "<< vidaFinal2 << endl;
     cout << "Edad: "<< edad2 << endl;
     cout << "Estado Marital: "<< Nupcias2 << endl;
     cout << "Rating: "<< rating2 << endl;

    return 0;
}