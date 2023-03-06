//
// Created by guea on 06/03/23.
//


#include <iostream>

using namespace std;

// create
int *aggiungiInFondo(int base[], int lunghezza, int nuovo)
{
    int lunghezzaNuovo = lunghezza + 1;
    int arrayNuovo[lunghezzaNuovo];
    for (int i = 0; i < lunghezzaNuovo + 1; i++)
    {
        arrayNuovo[i] = base[i];
    }
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        if (i < lunghezzaNuovo)
        {
            arrayNuovo[lunghezzaNuovo - 1] = nuovo;
        }
    }
    cout<< "Aggiungi in fondo il numero "<< nuovo <<endl;
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int *aggiungiInTesta(int base[], int lunghezza, int nuovo)
{
    int lunghezzaNuovo = lunghezza + 1;
    int arrayNuovo[lunghezzaNuovo];

    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        arrayNuovo[0] = nuovo;
    }
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        arrayNuovo[i+1] = base[i];
    }
    cout<<endl<< "Aggiungi in testa il numero "<< nuovo<< endl;
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int *aggiungiInPosizione(int base[], int lunghezza, int nuovo, int posizione)
{
    int lunghezzaNuovo = lunghezza + 1;
    int arrayNuovo[lunghezzaNuovo];

    for (int i = 0; i < posizione; i++)
    {
        arrayNuovo[i] = base[i];
    }
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        arrayNuovo[posizione] = nuovo;
    }
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        arrayNuovo[posizione+1] = base[i];
    }

    cout<<endl<< "Aggiungi in posizione "<< posizione << " il numero "<< nuovo<< endl;
    for (int i = 0; i < lunghezzaNuovo; i++)
    {
        cout << arrayNuovo[i] << " ";
    }

    return arrayNuovo;
}

int trovaPosizione(int base[], int lunghezza, int cerca)
{
    int trovaPosizione = 3;
    int arrayNuovo[trovaPosizione];
    for (int i = 0; i < trovaPosizione; i++)
        arrayNuovo[i] = base[i];
    for (int i = 0; i < lunghezza; i++)
        if (base[i] == cerca)
            arrayNuovo[trovaPosizione] = base[i];
        else
            arrayNuovo[trovaPosizione] = base[i] + 1;
    for (int i = 0; i < trovaPosizione; i++)
        base[i] = arrayNuovo[i];
    return trovaPosizione;


}

int *aggiornaInPosizione(int base[], int lunghezza, int valore, int posizione) {


}

int *rimuovi(int base[], int lunghezza, int indice)
{
}

int main()
{
    int arrayBase[5] = {4, 5, 3, 2, 6};
    int lunghezzaBase = sizeof(arrayBase) / sizeof(arrayBase[0]);
    int numero = 8;
    int posizione=3;
    int trovaposizione = 3;
    int *arrayNuovo = aggiungiInFondo(arrayBase, lunghezzaBase, numero);
    int *arrayNuovo2 = aggiungiInTesta(arrayBase, lunghezzaBase, numero);
    int* arrayNuovo3 = aggiungiInPosizione (arrayBase,lunghezzaBase, numero, posizione );



}

