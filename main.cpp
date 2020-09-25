#include <iostream>

int main(){
    std::string nombre, apellido;
    unsigned int edad;
    // std::cout << "Hola mundo" << std::endl;
    std::cout << "Nombre: ";
    getline(std::cin, nombre);
    std::cout << "Apellido: ";
    getline(std::cin, apellido);
    std::cout << "Edad:";
    std::cin >> edad;
    std::cout << "Hola: " << nombre << " " << apellido << std::endl;
    std:: cout << "Vas a cumplir: " << edad + 1 << " anios" << std::endl;
    return 0;
}
