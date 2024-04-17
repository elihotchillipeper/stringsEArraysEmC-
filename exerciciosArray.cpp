#include <iostream>
using namespace std;

int array01(){

    //Escreva um programa que solicita ao usuário que digite 5 números inteiros e armazene-os em um array. Em seguida, imprima os números na ordem inversa.

    int array[5];

    cout << "Digite 5 números inteiros: ";
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
    cout << "Você digitou: " << array[4] << array[3] << array[2] << array[1] << array[0] <<std::endl;

    return 0;
}


int array02(){

    //Crie um programa que leia 3 números inteiros do usuário e os armazene em um array. Em seguida, solicite ao usuário que digite um índice e imprima o número correspondente no array.

    int array[3], indice;

    cout << "Digite 3 número inteiros: ";
    cin >> array[0] >> array[1] >> array[2];

    cout << "Digite o índice: ";
    cin >> indice;

    if(indice == 0){
        cout << "Elemento: " << array[0] << std::endl;
    } else if(indice == 1){
        cout << "Elemento: " << array[1] << std::endl;
    } else if(indice == 2){
        cout << "Elemento: " << array[2] << std::endl;
    } else{
        cout << "Elemento não encontrado!" << std::endl;
    }

    return 0;
}

int array03(){

    //Faça um programa que leia 4 números inteiros do usuário e os armazene em um array. Em seguida, solicite ao usuário que digite um número e substitua
    //todas as ocorrências desse número no array pelo valor -1. Em seguida, imprima o array modificado.


    int array[4], n;

    cout << "Digite 4 número inteiros: ";
    cin >> array[0] >> array[1] >> array[2] >> array[3];

    cout << "Digite um número: ";
    cin >> n;

    if(n == array[0]){
        array[0] = -1;
        cout << array[0] << array [1] << array[2] << array[3];
    } else if(n == array[1]){
        array[1] = -1;
        cout << array[0] << array [1] << array[2] << array[3];
    }else if(n == array[2]){
        array[2] = -1;
        cout << array[0] << array [1] << array[2] << array[3];
    }else if(n == array[3]){
        array[3] = -1;
        cout << array[0] << array [1] << array[2] << array[3];
    } else {
        cout << array[0] << array [1] << array[2] << array[3];
    }

    return 0;
}




int main(){
    //array01();
    //array02();
    array03();



}