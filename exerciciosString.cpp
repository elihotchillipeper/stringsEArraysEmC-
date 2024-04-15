#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int exe01(){

    //Escreva um programa que solicita ao usuário que digite uma palavra e exiba o tamanho da palavra.

    //por váriável 
    std::string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    //length = exibe o tamanho da string (não usar %zu)
    cout << "Tamanho: " << palavra.length() << std::endl;

    return 0;
}

int exe02(){

    //Crie um programa que receba duas strings do usuário e as concatene em uma terceira string. Em seguida, imprima a string resultante.

    string palavra1;
    string palavra2;

    cout << "Digite uma palavra: ";
    cin >> palavra1;
    cout << "Digite outra palavra: ";
    cin >> palavra2;

    std::string result = palavra1 + palavra2;

    cout << "Resultado: " << result << std::endl;
    
    return 0;
}


int exe03(){

    //Faça um programa que leia uma frase do usuário e substitua todas as ocorrências da letra 'a' pela letra 'e' na frase. Em seguida, imprima a frase modificada.

    std::string frase;

    cout << "Digite uma frase: ";
    std::getline(std::cin, frase); //getline armazena frases

    std::replace(frase.begin(), frase.end(), 'a', 'e');
    //trocar inicio "a" pelo final "e" 

    cout << "Frase final: " << frase <<std::endl;
    return 0;
}




int main(){
    //exe01();
    //exe02();
    exe03();
}