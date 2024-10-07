#include <iostream>

struct Entity{
    int x, y;
};

int main(){
    //int a = 50;
    //double value = *(double*)&a;
    //std::cout << value << std::endl;

    Entity e = { 5, 8 };

    int* position = (int*)&e;

    int y = *(int*)((char*)&e + 4); // 8

    std::cout << position[0] << ", " << position[1] << std::endl; //5, 8

    std::cout << y << std::endl;

    std::cin.get();
}
