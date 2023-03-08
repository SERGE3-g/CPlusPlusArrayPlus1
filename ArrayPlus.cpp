//
// Created by guea on 06/03/23.
//


#include <iostream>

using namespace std;

// create
int *aggiungiInFondo(int base[], int dim, int nuovo)
{
    int arrayRis[dim + 1];
    for (int i = 0; i < dim; i++)
    {
        arrayRis[i] = base[i];
    }
    arrayRis[dim] = nuovo;
    cout << "Aggiungo in fondo " << nuovo << endl;
    mostra(arrayRis, dim + 1);
    return arrayRis;
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

int trovaPosizione(int base[], int dim, int cerca) 
{
    for (int i = 0; i < dim; i++)
    {
        if (base[i] == cerca)
        {
            return i + 1;
        }
    }
    return -1;

}

int *aggiornaInPosizione(int base[], int dim, int valore, int posizione) 
{
    if (posizione > dim)
    {
        cout << "La posizione si trova al di fuori dell'array";
        return base;
    }
    else
    {
        int arrayRis[dim];
        for (int i = 0; i < posizione - 1; i++)
        {
            arrayRis[i] = base[i];
        }
        arrayRis[posizione - 1] = valore;
        for (int i = posizione; i < dim; i++)
        {
            arrayRis[i] = base[i];
        }
        mostra(arrayRis, dim);
        return arrayRis;
    }
}


int *rimuovi(int base[], int lunghezza, int indice)
{
}

int main()
{
    
    int base[] = {6, 8, 7, 8, 8, 9};
    int dim = sizeof(base) / sizeof(base[0]);
    int nuovo = 11;
    int posizione = 3;
    int daTrovare = 8;
    int *array1 = aggiungiInFondo(base, dim, nuovo);
    cout << endl;
     int *array2 = aggiungiInTesta(base, dim, nuovo);
     cout << endl;
     int *array3 = aggiungiInPosizione(int base[], int lunghezza, int nuovo, int posizione);
     cout << endl;
     cout << "Elemento " << daTrovare << " si trova in posizione " << trovaPosizione(base, dim, daTrovare) << endl;
     cout << endl;
    int *array4 = aggiornaInPosizione(base, dim, nuovo, posizione);
     cout << endl;
    return 0;
}
