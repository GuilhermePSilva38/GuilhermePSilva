#include <iostream>
#include <string>
using namespace std;

int main() {
    auto paraBinario = [](int n) { //comprime os resultados binarios que deram sequencias maiores ou iguais a 7
        string b;
        for (int i = 7; i >= 0; i--)
            b += (n >> i) & 1 ? '1' : '0';
        return b;
    };

    auto comprimir = [](const string& b) {
        string r;
        char c = b[0];
        int cont = 1;
        for (int i = 1; i < b.length(); i++) {
            if (b[i] == c) cont++;
            else {
                r += (cont >= 7) ? "(" + string(1, c) + "," + to_string(cont) + ")" : string(cont, c);
                c = b[i];
                cont = 1;
            }
        }
        r += (cont >= 7) ? "(" + string(1, c) + "," + to_string(cont) + ")" : string(cont, c);
        return r;
    };

    string frase;
    system("cls"); // limpa o terminal para deixar mais limpo visualmente

    cout << "Digite uma frase para ser transformada em valores inteiros (usando a tabela ASCII):\n";
    getline(cin, frase); //guarda a frase digitada para poder comprimir

    string bin;
    for (char ch : frase)
        bin += paraBinario((int)ch);

    cout << "Algoritmos das frases comprimidas:\n" << comprimir(bin) << endl; //da o resultado da compressao de todas as palavras juntas em valor binario comprimido
    return 0;
}
