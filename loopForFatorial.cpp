#include <iostream>
using namespace std;

int main(){
    int numero, fatorial = 1;

    cout << "Digite um numero para calcular o fatorial: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++){
        fatorial *= i;
    }
    cout << "O fatorial de " << numero << " é " << fatorial << endl;
    return 0;
}