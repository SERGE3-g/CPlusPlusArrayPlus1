//
// Created by guea on 08/03/23.
//
#include <iostream>

using namespace std;

int deleteAll(int base[], int dim, int num)
{
    int count = 0;
    for (int i = 0; i < dim; i++)
    {
        if (base[i] != num)
        {
            base[count++] = base[i];
        }
    }
    while (count < dim)
    {
        base[count++] = 0;
    }
    cout << "Dopo la rimozione dell'array: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << base[i] << endl;
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 8, 17, 30, 27};
    int dim = 5;
    int num = 30;

    cout << "Prima della rimozione dell'array: " << endl;
    for (int i = 0; i < dim; i++)
    {
        cout << arr[i] << endl;
    }
    deleteAll(arr, dim, num);
}
