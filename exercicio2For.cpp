#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    if (numero <= 1) {
        cout << numero << " não é primo" << endl;
    } else {
        bool primo = true;
        for (int i = 2; i < numero; i++){
            if(numero % i == 0){
                primo = false;
                break;
            }
        }
        if(primo){
            cout << numero << " é primo" << endl;
        }
        else{
            cout << numero << " não é primo" << endl;
        }
    }
    return 0;
}