pegar coisas da memoria = push_back, detalhe, usar variável.push_back.

para apagar coisas da memória (o último número) = pop.back, detalhe, usar variável.pop.back.

saber se está vazio, usar variável.empty.

++ para ir para frente na memória
-- para voltar na memória

⦁	sort = sort(nomedovetor.begin(), nomedovetor.end());

vetor é igual a roda de soldado inimigo

**Aula 12/11**
#include <iosteam>
#include <fstream>

//ifstream ler arquivo + variavel + (arquivo a ser lido);
//if + (variavel.is_open()) para verificar se o arquivo foi aberto corretamente
//while + (getline(variavel, linha)) para ler linha por linha do arquivo
//getline(variavel, linha) para armazenar a linha lida na variavel linha
//cout << linha << std::endl; para imprimir a linha lida
//variavel.close(); para fechar o arquivo
