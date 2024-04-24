#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 25000; i++){
        if(i % 2 == 0){
            cout << i << " esse numero é par" << endl;
        }
        else
        {
            cout << i << " esse numero é impar" << endl;
        }
    }
    return 0;
}