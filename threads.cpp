#include <iostream>
#include <thread>

void DoWork(){

}

int main(){
    std::thread worker(DoWork);

    std::cin.get();
}
