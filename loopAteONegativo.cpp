#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Digite um numero (digite um valor negativo pra sair): ";
    cin >> numero;

    while (numero >= 0)
    {
        cout << "Você digitou: " << numero << endl;
        cout << "Digite outro numero (digite um valor negativo pra sair): ";
        cin >> numero;
    }
    cout << "Programa encerrado" << endl;
    return 0;
}