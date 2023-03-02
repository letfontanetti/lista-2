#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num;
    //long long é usado para o cálculo com números grandes
    long long fatorial = 1;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    //calcula o fatorial do número
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    cout << "O fatorial de " << num << " é: " << fatorial << endl;

    return 0;
}
