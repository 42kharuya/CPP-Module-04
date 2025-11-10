#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "\033[31m" << "Animal default constructor called"
			  << "\033[m" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout << "\033[31m" << "Animal \"" << this->_type << "\" constructor called"
              << "\033[m" << std::endl;
}

Animal::~Animal() {
	std::cout << "\033[31m" << "Animal \"" << this->_type << "\" destructor called"
              << "\033[m" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
	std::cout << "\033[31m" << "Animal \"" << this->_type << "\" Copy constructor called"
			  << "\033[m" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	std::cout << "\033[31m" << "Animal \"" << this->_type
              << "\" Copy assignment operator called" << "\033[m" << std::endl;
    if (this != &other)
		this->_type = other._type;
    return *this;
}

void Animal::makeSound() const {
	std::cout << "\033[31m" << "* Animal sounds *" << "\033[m" << std::endl;
}
