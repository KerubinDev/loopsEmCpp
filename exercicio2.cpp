#include <iostream>
using namespace std;

int main(){
    int numero, soma = 0;

    cout << "Digite um valor: ";
    cin >> numero;

        while (numero > 0)
        {
           int digito = numero % 10;
           soma += digito; 
           numero /= 10;
        }
        cout << "a soma dos digitos é: " << soma << endl;

        return 0;
}