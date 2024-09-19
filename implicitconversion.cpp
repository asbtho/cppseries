#include <iostream>
#include <string>

class Entity{
private:
    std::string m_Name;
    int m_Age;
public:
    explicit Entity(const std::string& name) 
        : m_Name(name), m_Age(-1) {}

    explicit Entity(int age) 
        : m_Name("Unknown"), m_Age(age) {}

    //const String& GetName() const { return m_Name; }
};

void PrintEntity(const Entity& entity){

}

int main(){
    //PrintEntity(std::string("Cherno"));
    //PrintEntity(22);

    //Entity a = std::string("Cherno");
    //Entity b = 22;
    Entity a = Entity("Cherno");
    Entity b = Entity(22);

    std::cin.get();
}
