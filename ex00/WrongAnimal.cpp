#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "\033[31m" << "WrongAnimal default constructor called"
			  << "\033[m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout << "\033[31m" << "WrongAnimal \"" << this->_type << "\" constructor called"
              << "\033[m" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\033[31m" << "WrongAnimal \"" << this->_type << "\" destructor called"
              << "\033[m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type) {
	std::cout << "\033[31m" << "WrongAnimal \"" << this->_type << "\" Copy constructor called"
			  << "\033[m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "\033[31m" << "WrongAnimal \"" << this->_type
              << "\" Copy assignment operator called" << "\033[m" << std::endl;
    if (this != &other)
		this->_type = other._type;
    return *this;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "\033[31m" << "* WrongAnimal sounds *" << "\033[m" << std::endl;
}
