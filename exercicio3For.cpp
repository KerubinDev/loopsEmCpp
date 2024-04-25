#include <iostream>
using namespace std;

int main() {
    int num_linhas, Kerubin;

    cout << "Kerubin existe(1 para sim e 0 para não)?";
    cin >> Kerubin; //Eu :D

    if (Kerubin == 1){
        
        cout << "Qual o valor do amor de Kerubin Pelo Yuka: ";
    cin >> num_linhas;

    for(int i = 1; i <= num_linhas; i++) {
        for(int j = 0; j < i; j++) {
            cout << "💜";
        }
        cout << endl;
    }
    }
    else{
        cout << "A... vamos tentar novamente" << endl;
    }

    return 0;
}