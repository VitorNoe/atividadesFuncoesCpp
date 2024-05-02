#include <iostream>
#include <string>
using namespace std;

void imprimirNome(const string& nome) {
    cout << "Nome: " << nome << endl;
}

void imprimirVogais(const char* vogais, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        cout << vogais[i] << endl;
    }
}

int main() {
    string nome = "Seu nome aqui";
    imprimirNome(nome); 

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    imprimirVogais(vogais, 5);

    string letra;
    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u") {
        cout << "A letra inserida é uma vogal." << endl;
    } else {
        cout << "A letra inserida não é uma vogal." << endl;
    }


    char palavra[10];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "A palavra digitada foi: " << palavra << endl;

    return 0;
}