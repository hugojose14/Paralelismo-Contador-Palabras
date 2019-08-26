#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main (){

    int contador=0;
    string lineas;
    //Load Archivo
    ifstream Archivo ;
    Archivo.open("libro.txt");

    while(!Archivo.eof()){
    getline(Archivo,lineas);

        int NumeroCaracteres= lineas.length();
        for (unsigned int i = 0; i<lineas.length();i++){ 
            if (lineas.at(i) == ' '){
                NumeroCaracteres--;
            }
        }
    contador +=NumeroCaracteres;
    }
    cout << "Numero de palabras que tiene el libro"<< contador << endl;
        return 0 ;
}