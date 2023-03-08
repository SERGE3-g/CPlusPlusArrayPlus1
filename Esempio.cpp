//
// Created by guea on 08/03/23.
//

#include <iostream>

using namespace std;

// passaggio per riferimento

void modify(int &input){
    input = 20;

}

int main()
{
    int a = 10;
    int b = 20;

    modify(a);

    cout << a << endl;

    //i puntatori
    int *p = &a;

    cout <<p<<endl;
    cout << *p << endl;






}

/* cout << "a:" << a << endl;
 cout << "b:" << b << endl;

int *p = &a;
int *q = &b;

cout << "p: " << p << endl;
cout << "q: " << q << endl;

cout << "p: " << *p << endl;
cout << "q: " << *q << endl;

int *r = p;
 p=q;
 q=r;

 cout << "stampa mia: " << endl;

 cout << "p: " << *p << endl;
 cout << "q: " << *q << endl;*/

