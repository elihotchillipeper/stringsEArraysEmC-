#include <iostream>
using namespace std;

int main(){

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[10] = {6, 7, 8, 9, 10};
    int arr3[1] = {};

    cout << "Array 1: " << arr1[0] << arr1[1] << arr1[2] << arr1[3] << arr1[4] << std::endl;

    cout << "Digite 5 números: ";
    cin >> arr2[5] >> arr2[6] >> arr2[7] >> arr2[8] >> arr2[9];

    arr3[0] = {999};

    cout << "Arrays 1: " << arr1[0] << arr1[1] << arr1[2] << arr1[3] << arr1[4] << std::endl;
    cout << "Arrays 2: " << arr2[0] << arr2[1] << arr2[2] << arr2[3] << arr2[4] << arr2[5] << arr2[6] << arr2[7] << arr2[8] << arr2[9] << std::endl;
    cout << "Arrays 3: " << arr3[0] << std::endl;


    return 0;
}