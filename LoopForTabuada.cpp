// nome do arquivo "LFT"

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Digite um numero para ver sua tabuada de multiplicação: ";
    cin >> numero;

    for(int i = 1; i <= 10; i++){
        cout << numero << " x " << numero << " = " << i*numero << endl;
    }
    return 0;
}