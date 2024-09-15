#include <iostream>
#include <string>



class Entity {
public:
	int x, y;

    Entity(int x, int y){
        this->x = x;
        this->y = y;
        PrintEntity(*this);
    }

    int GetX() const{
    }
};

void PrintEntity(const Entity& e){

}

int main(){

    std::cin.get();
}