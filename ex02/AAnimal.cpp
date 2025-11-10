#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "\033[31m" << "AAnimal default constructor called"
			  << "\033[m" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type) {
	std::cout << "\033[31m" << "AAnimal \"" << this->_type << "\" constructor called"
              << "\033[m" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "\033[31m" << "AAnimal \"" << this->_type << "\" destructor called"
              << "\033[m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type) {
	std::cout << "\033[31m" << "AAnimal \"" << this->_type << "\" Copy constructor called"
			  << "\033[m" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other) {
	std::cout << "\033[31m" << "AAnimal \"" << this->_type
              << "\" Copy assignment operator called" << "\033[m" << std::endl;
    if (this != &other)
		this->_type = other._type;
    return *this;
}

std::string AAnimal::getType() const {
	return _type;
}
