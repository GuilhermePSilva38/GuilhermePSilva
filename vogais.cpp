//mostrar vogais// 

#include <iostream>
using namespace std;

int main() {
    cout << "digite uma palavra de 5 letras";
    string palavra;
    cin >> palavra;
    if (palavra.length() != 5) {
        cout << "A palavra deve ter exatamente 5 letras." << endl;
        return 0;
    }
    palavra[0]=tolower(palavra[0]);
    palavra[1]=tolower(palavra[1]);
    palavra[2]=tolower(palavra[2]);
    palavra[3]=tolower(palavra[3]);
    palavra[4]=tolower(palavra[4]);   

    int conta=0;
    if (palavra[0]=='a' || palavra[0]=='e' || palavra[0]=='i' || palavra[0]=='o' || palavra[0]=='u' || palavra[0]=='o') {
        conta++; //conta=conta+1;
        cout << " A letra " << palavra[0] << " e vogal\n";
    }
    if (palavra[1]=='a' || palavra[1]=='e' || palavra[1]=='i' || palavra[1]=='o' || palavra[1]=='u' || palavra[1]=='o') {
        conta++; //conta=conta+1;
        cout << " A letra " << palavra[1] << " e vogal\n";
    }
    if (palavra[2]=='a' || palavra[2]=='e' || palavra[2]=='i' || palavra[2]=='o' || palavra[2]=='u' || palavra[2]=='o') {
        conta++; //conta=conta+1;
        cout << " A letra " << palavra[2] << "e vogal\n";
    }
    if (palavra[3]=='a' || palavra[3]=='e' || palavra[3]=='i' || palavra[3]=='o' || palavra[3]=='u' || palavra[3]=='o') {
        conta++; //conta=conta+1;
        cout << "A letra " << palavra[3] << " e vogal\n";
    }
    if (palavra[4]=='a' || palavra[4]=='e' || palavra[4]=='i' || palavra[4]=='o' || palavra[4]=='u' || palavra[4]=='o') {
        conta++; //conta=conta+1;
        cout << " A letra " << palavra[4] << " e vogal\n";
    }
}
    
        