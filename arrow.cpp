#include <iostream>
#include <string>

class Entity {
public:
    int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr{
private:
    Entity* m_Obj;
public:
    ScopedPtr(Entity* entity) : m_Obj(entity){
    }

    ~ScopedPtr(){
        delete m_Obj;
    }

    Entity* operator->(){
        return m_Obj;
    }

    const Entity* operator->() const {
        return m_Obj;
    }
};

struct Vector3 {
    float x, y, z;
};

int main(){
    Entity e;
    e.Print();

    // Arrow
    Entity* ptr = &e;
    ptr->Print();
    ptr->x = 2;

    // Scoped Pointer
    const ScopedPtr entity = new Entity();
    entity->Print();

    //Offset of the x in Vector3
    int offset = (int)&((Vector3*)nullptr)->x;
    //Offset of the y in Vector3
    int offset2 = (int)&((Vector3*)nullptr)->y;
    //Offset of the z in Vector3
    int offset3 = (int)&((Vector3*)nullptr)->z;
    std::cout << offset << std::endl;
    std::cout << offset2 << std::endl;
    std::cout << offset3 << std::endl;

    std::cin.get();
}