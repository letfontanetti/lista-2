#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num;
    //long long � usado para o c�lculo com n�meros grandes
    long long fatorial = 1;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    //calcula o fatorial do n�mero
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    cout << "O fatorial de " << num << " �: " << fatorial << endl;

    return 0;
}
