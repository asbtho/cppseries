#include <iostream>

int main(){
    // 50 integer pointers
    int** a2d = new int*[50];

    for (int i = 0; i < 50; i++){
        a2d[i] = new int[50];
    }

    for (int i = 0; i < 50; i++){
        delete[] a2d[i];
    }
    delete[] a2d;

    int* array = new int[5 * 5];
    for (int y = 0; y < 5; y++){
        for (int x = 0; x < 5; x++){
            array[x + y * 5] = x + y * 5;
        }
    }

    for (int y = 0; y < 5; y++){
        for (int x = 0; x < 5; x++){
            std::cout << array[x + y * 5] << std::endl;
        }
    }

    std::cin.get();
}
