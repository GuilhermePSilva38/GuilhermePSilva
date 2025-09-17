#include <iostream>
#include <stdlib.h>
#include <cctype> // Para usar tolower
using namespace std;

int main() {
    cout << "Digite uma palavra para ser adivinhada por um segundo jogador: \n";
    string palavra;
    cin >> palavra;

    system("cls");  // Limpa a tela (dependendo do sistema operacional)
    
    // Convertendo a palavra para minúsculas
    for (int i = 0; i < palavra.length(); i++) {
        palavra[i] = tolower(palavra[i]);
    }

    cout << "A palavra tem " << palavra.length() << " letras \n";
    string palavraOculta(palavra.length(), '_'); // Palavra oculta, no começo é tudo "_"

    int tentativas = 0;
    const int MAX_TENTATIVAS = 6;  // Número máximo de tentativas (pode ajustar)

    while (tentativas < MAX_TENTATIVAS && palavraOculta != palavra) {
        cout << "\nPalavra: " << palavraOculta << endl;
        cout << "Tentativa " << tentativas + 1 << " de " << MAX_TENTATIVAS << endl;

        cout << "Digite uma letra: ";
        char letra;
        cin >> letra;
        letra = tolower(letra); // Garante que a letra será minúscula

        bool acerto = false;

        // Verifica se a letra está na palavra
        for (int i = 0; i < palavra.length(); i++) {
            if (letra == palavra[i]) {
                palavraOculta[i] = letra;
                acerto = true;
            }
        }

        if (!acerto) {
            tentativas++;
            cout << "A letra nao esta na palavra.\n";
        }

        if (palavraOculta == palavra) {
            cout << "\nParabens! Voce adivinhou a palavra: " << palavra << endl;
        } else if (tentativas == MAX_TENTATIVAS) {
            cout << "\nVoce perdeu! A palavra era: " << palavra << endl;
        }
    }

    return 0;
}