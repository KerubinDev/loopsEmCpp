#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, i = 1;
    cout << "Digite o valor desejado: ";
    cin >> n;

    cout << "Sequência de Fibonacci até o termo " << n << ": ";

    while (i <= n) {
        cout << a << ", ";
        int proximo = a + b;
        a = b;
        b = proximo;
        i++;
    }
    return 0;
}