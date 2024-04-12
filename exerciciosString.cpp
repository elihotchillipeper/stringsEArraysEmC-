#include <iostream>

int exe01(){

    //por váriável 
    std::string palavra;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;

    //length = exibe o tamanho da string (não usar %zu)
    std::cout << "Tamanho: " << palavra.length() << std::endl;

    return 0;
}

int exe02(){
    std::string palavra1;
    std::string palavra2;

    std::cout << "Digite uma palavra: ";
    std::cin >> palavra1;
    std::cout << "Digite outra palavra: ";
    std::cin >> palavra2;

    std::string result = palavra1 + palavra2;

    std::cout << "Resultado: " << result << std::endl;
    
    return 0;
}


int exe03(){

    std::string frase;

    std::cout << "Digite uma frase: ";
    std::cin >> frase;

    return 0;
}









int main(){
    //exe01();
    //exe02();
    exe03();
}