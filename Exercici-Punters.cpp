#include <iostream>

#include <string>

using namespace std;

int main() {

    int opcio = 0;
    int Errors = 0;
    int* Punter1 = NULL;
    Punter1 = new int;
    //Part del codi que esborra un punter i le mostra per pantalla per veure que esta buit
    cout << "Vols esborrar el Punter " << Punter1 << " ? 1. Si 2. No " << endl;
    cin >> opcio;

    if (opcio == 1) {

        delete Punter1;//Esborro el punter
        cout << "Aixi queda el punter buit:" << endl;
        cout << Punter1 << endl;//Mostro el punter
        cout << endl;
    }
    //Part del codi que esborra un punter i le mostra per pantalla per veure que esta buit
    char* arrayDinamic = new char[40];
    cout << "Introdueix un text per l'array" << endl;
    cin >> arrayDinamic;
    cout << "Vols esborrar la array " << arrayDinamic << " ?  1. Si 2. No " << endl;
    cin >> opcio;
    if (opcio == 1) {
        delete[] arrayDinamic;//Esborro l'array
        cout << endl;
    }

    //Part del codi que utilitza una variable dinamica abans de que li hagui assignat cap valor
    cout << "Aquest codi pot causar errors, vols executar-lo? 1. Si 2. No" << endl;
    cin >> Errors;
    if (Errors == 1) {
        int* Punter2 = new int;//Creo el punter pero no li dono cap valor
        cout << "Mostrare una variable dinamica abans de donar-li un valor." << endl;
        cout << "Punter 2: " << *Punter2 << endl;//Mostro el punter sense valors que donar un valor erroni
        cout << endl;
    }

    //Part del codi que mostra una variable dinamica que ja he esborrat
    cout << "Aquest codi pot causar errors, vols executar-lo? 1. Si 2. No" << endl;
    cin >> Errors;
    if (Errors == 1) {
        int* Punter3 = new int;//Creo el punter
        *Punter3 = 30;
        delete Punter3;//Esborro el punter
        cout << "Mostrare una variable dinamica que ja he esborrat." << endl;
        cout << "Punter 3: " << *Punter3 << endl;//mostro el punter que ja he esborrat donant error
        cout << endl;
    }

    //Part del codi que esborra una array dinamica incorrectament utilitzant delete a secas
    cout << "Aquest codi pot causar errors, vols executar-lo? 1. Si 2. No" << endl;
    cin >> Errors;
    if (Errors == 1) {
        char* array2 = new char[20];//Creo una array
        cout << "Esborrare l'array incorrectament." << endl;
        delete array2;//Esborro l'array amb delete sense els claudators
    }

    return 0;
}