#include <iostream>
using namespace std;

int main(){
    int i = 2;
    int valor;

    cout << "Digite um valor: ";
    cin >> valor;

        while (i <= valor)
        {
            cout << i << endl;
            i+=2;
        }
        return 0;
}