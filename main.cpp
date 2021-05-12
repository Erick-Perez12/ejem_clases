#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main() {
    //DynamicArray p;    
    //cout << p.getSize() << endl;

    Point arr[4];
    int tam = sizeof(arr) / sizeof(arr[0]);

    DynamicArray q(arr, tam);
    cout << q.getSize() << endl; //4
    // estoy llamando al constructor copia
    
    Point a(6,4);
    q.push_back(a);
    cout <<"TAMAÑO: "<< q.getSize() << endl; //5
    q.getArray();
    cout<<endl;
    Point b(5,2);
    q.insert(b,3);
    cout <<"TAMAÑO: "<< q.getSize() << endl;
    q.getArray();
    cout<<endl;
    q.remove(2);
    cout <<"TAMAÑO: "<< q.getSize() << endl;
    q.getArray();

    return 0;
}