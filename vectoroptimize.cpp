#include <iostream>
#include <string>
#include <vector>

struct Vertex{
    float x, y, z;

    Vertex(float x, float y, float z) : x(x), y(y), z(z) {}

    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z){
        std::cout << "Copied!" << std::endl;
    }
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main(){
    // Vector
    std::vector<Vertex> vertices;
    vertices.reserve(3); // reserve memory for three Vertex
    vertices.emplace_back(1, 2, 3); //emplace instead of push
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);

    std::cin.get();
}
