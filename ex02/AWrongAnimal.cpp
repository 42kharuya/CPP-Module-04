#include "AWrongAnimal.hpp"

AWrongAnimal::AWrongAnimal() : _type("AWrongAnimal") {
	std::cout << "\033[31m" << "AWrongAnimal default constructor called"
			  << "\033[m" << std::endl;
}

AWrongAnimal::AWrongAnimal(const std::string &type) : _type(type) {
	std::cout << "\033[31m" << "AWrongAnimal \"" << this->_type << "\" constructor called"
              << "\033[m" << std::endl;
}

AWrongAnimal::~AWrongAnimal() {
	std::cout << "\033[31m" << "AWrongAnimal \"" << this->_type << "\" destructor called"
              << "\033[m" << std::endl;
}

AWrongAnimal::AWrongAnimal(const AWrongAnimal &other) : _type(other._type) {
	std::cout << "\033[31m" << "AWrongAnimal \"" << this->_type << "\" Copy constructor called"
			  << "\033[m" << std::endl;
}

AWrongAnimal& AWrongAnimal::operator=(const AWrongAnimal &other) {
	std::cout << "\033[31m" << "AWrongAnimal \"" << this->_type
              << "\" Copy assignment operator called" << "\033[m" << std::endl;
    if (this != &other)
		this->_type = other._type;
    return *this;
}

std::string AWrongAnimal::getType() const {
	return _type;
}

void AWrongAnimal::makeSound() const {
	std::cout << "\033[31m" << "* Animal sounds *" << "\033[m" << std::endl;
}
