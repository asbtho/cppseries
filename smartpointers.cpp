#include <iostream>
#include <string>
#include <memory>

class Entity{
public:
    Entity(){ // Constructor
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity(){ // Destructor
        std::cout << "Destroyed Entity!" << std::endl;
    }
};

int main(){
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

    std::cin.get();
}
