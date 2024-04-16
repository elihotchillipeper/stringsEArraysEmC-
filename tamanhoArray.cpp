#include <iostream>
using namespace std;

int main(){

    int array[] = {1, 2, 3};
    int tamanho = sizeof(array)/ sizeof(array[0]);
    cout << "Tamanho do array: " << tamanho << std::endl;

    return 0;
}