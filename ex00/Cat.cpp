#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[33m" << "Cat default constructor called"
			  << "\033[m" << std::endl;
}

Cat::~Cat() {
	std::cout << "\033[33m" << "Cat destructor called"
			  << "\033[m" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "\033[33m" <<"Cat Copy constructor called"
			  << "\033[m" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "\033[33m" << "Cat Copy assignment operator called"
			  << "\033[m" << std::endl;
    if (this != &other)
		Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
	std::cout << "\033[33m" << "Meow Meow" << "\033[m" << std::endl;
}
