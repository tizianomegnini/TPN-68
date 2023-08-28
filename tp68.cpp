#include <iostream>
#include <string>
using namespace std;

string InsertarPunto(string frase) {
    string inspun = ".";
    for (int i = 3; i < frase.size(); i+=4) {
		frase.insert(i, inspun); 	
	}
    return frase;
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    getline(cin,palabra);
   
    cout <<"palabra con puntos: " << InsertarPunto (palabra) << endl;

    return 0;
}
