#include <iostream>
#include <string>
#include <vector>

struct Vertex{
    float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main(){
    // Static
    Vertex* vertices1 = new Vertex[5];

    // Vector
    std::vector<Vertex> vertices;
    vertices.push_back({ 1, 2, 3 });
    vertices.push_back({ 4, 5, 6 });

    for (int i = 0; i < vertices.size(); i++){
        std::cout << vertices[i] << std::endl;
    }

    for (Vertex& v : vertices){
        std::cout << v << std::endl;
    }

    //vertices.clear(); //
    vertices.erase(vertices.begin() + 1); // remove second element
    for (Vertex& v : vertices){
        std::cout << v << std::endl;
    }
    std::cin.get();
}
