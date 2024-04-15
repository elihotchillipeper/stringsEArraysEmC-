#include <iostream>
using namespace std;

int main(){

    int valor;

    cout << "Digite um valor inteiro: ";
    cin >> valor;
    cout << "Valor digitado: " << valor << std::endl;



    double temperatura;

    cout << "Digite a temperatura: ";
    cin >> temperatura;
    cout << "Temperatura digitada: " << temperatura << std::endl;



    std::string nome;
    std::cout << "Digite seu nome: ";
    std::cin >> nome;
    std::cout << "Olá, " << nome << "!" << std::endl;

    return 0;
}