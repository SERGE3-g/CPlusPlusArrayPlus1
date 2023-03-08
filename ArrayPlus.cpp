//
//
//


#include <iostream>
using namespace std;


#include <iostream>
// Create
using namespace std;


void stampa(int base[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << base[i] << " ";
    }
    cout << endl;
}

// Create
int *aggiungiInFondo(int base[], int dim, int elemento)
{
    int* risultato = new int[dim + 1];

    for( int i=0; i<dim; i++){ //copia l'array base in risultato
        risultato[i]=base[i];
    }

    risultato[dim]=elemento; //aggiunge l'elemento in fondo

    return risultato;
}
int *aggiungiInTesta(int base[], int dim, int elemento)
{
    int* risultato = new int[dim + 1];

    risultato[0]=elemento; //aggiunge l'elemento in testa

    for(int i=1; i<dim+1; i++){ //copia l'array base in risultato
        risultato[i]=base[i-1];
    }

    // todo
    return risultato;
}

int *aggiungiInPosizione(int base[], int dim, int elemento, int posizione = 0)
{
    if(posizione == 0){
        int* p = aggiungiInTesta(base, dim, elemento);
        return p;
    }
    else if(posizione == dim){
        int* p = aggiungiInFondo(base, dim, elemento);
        return p;
    }
    else{
        int* risultato = new int[dim + 1];

        for(int i=0; i<posizione; i++){ //copia l'array base in risultato
            risultato[i]=base[i];
        }

        risultato[posizione]=elemento; //aggiunge l'elemento in posizione

        for(int i=posizione+1; i<dim+1; i++){ //copia l'array base in risultato
            risultato[i]=base[i-1];
        }

        return risultato;
    }
}

// Read
/*
Trova la posizione di un elemento in un array
@param base[] array di interi
@param dim dimensione dell'array
@param cerca elemento da cercare
@return posizione dell'elemento cercato, -1 se non trovato
*/
int trovaPosizione(int base[], int dim, int cerca)
{
    for(int i=0; i<dim; i++){
        if(base[i]==cerca){
            return i;
        }
    }
    return -1;
}

// Update
int *aggiornaInPosizione(int base[], int dim, int valore, int posizione)
{
    int* risultato = new int[dim];
    for(int i=0; i<dim; i++){
        if(i==posizione){
            risultato[i]=valore;
        }
        else{
            risultato[i]=base[i];
        }
    }
    return risultato;

}

int *rimuovi(int base[], int dim, int posizione) //rimuove un elemento in una posizione
{
    int* risultato = new int[dim - 1];

    for (int i = 0; i < posizione; i++) // PRIMA PARTE
    {
        risultato[i] = base[i];
    }

    for (int i = posizione; i < dim - 1; i++) //SECONDA PARTE
    {
        risultato[i] = base[i + 1];
    }
    return risultato;
}

int *deleteAllArray(int base[], int dim ,int posizione)  //rimuove tutti gli elementi in una posizione
{
    int* risultato = new int[dim - 1];
    int count = 0;
    for (int i = 0; i < dim; i++)
    {
        if (base[i] != posizione)
        {
            risultato[count] = base[i];
            count++;
        }

    }
    return risultato;
}


int main()
{

    int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dim = sizeof(input) / sizeof(input[0]);
    int elemento = 13;
    int cerca = 5;
    int posizione = 5;
    int deleteAll = 10;

    stampa(input, dim);

    int* p = aggiungiInFondo(input, dim, elemento);

    stampa(p, dim + 1);
    deleteAllArray(p, dim + 1, deleteAll);
    stampa(p, dim + 1);
    delete[] p;

    return 0;
}