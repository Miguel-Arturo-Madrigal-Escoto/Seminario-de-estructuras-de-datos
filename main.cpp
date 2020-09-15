#include <iostream>

int main(){
    std::string nombre, apellido;
    std::cout << "Hola mundo" << std::endl;
    std::cout << "Nombre: ";
    getline(std::cin, nombre);
    std::cout << "Apellido: ";
    getline(std::cin, apellido);
    std::cout << "Hola: " << nombre << " " << apellido << std::endl;
    return 0;
}
