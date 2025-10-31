#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    vector<int> numeros;
    vector<int>::iterator ponteiro;

    //inserindo valores de [1,5] no vetor
    for (int i = 1; i <= 5; i++){
        numeros.push_back(i); // 1 2 3 4 5 
    }  
         
        ponteiro = numeros.begin(); //ponteiro aponta para o numero 1
        ++ponteiro;  //ponteiro aponta para o proximo numero
        numeros.insert(ponteiro, 10); //1 10 2 3 4 5 (ponteiro -> 2)
        ++ponteiro;
        numeros.insert(ponteiro, 2,20); //1 10 20 20 2 3 4 5 (ponteiro -> 2)
        --ponteiro; //ponteiro aponta para o numero 20
    
    for (ponteiro = numeros.begin(); ponteiro !=numeros.end(); ++ponteiro) {
        cout << ' '  << *ponteiro; //ponteiro recupera o valor do elemento
    }
    cout << endl;
    return 0;    

}    