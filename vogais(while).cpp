//mostrar vogais usando while// 

#include <iostream>
using namespace std;

int main() {
    cout << "digite uma palavra\n";
    string palavra;
    cin >> palavra;
    int i=0;
    int contavogais=0;
    while (i <palava.length())-1) {
        if (palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u' ) {
            contavogais++;
            cout << "A posicao" << i << " tem uma vogal" << palavra[i];
        }
        i++;
    }
    return 0;
}         
