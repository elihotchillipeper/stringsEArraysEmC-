#include <iostream>
using namespace std;

int arrayElementos01(){

    int arr[5] = {1, 2, 3};
    arr[3] = 4;
    arr[4] = 5;

    cout << "Último elemento: " << arr[4] << std::endl;


    return 0;
}

//ALTERAÇÃO DE ARRAY

int arrayElementos02(){

    int arr[3] = {1, 2, 3};
    arr[1] = 10;

    cout << "Elemento alterado: " << arr[1] << std::endl;


    return 0;
}



int main(){
    //arrayElementos01();
    arrayElementos02();
}