#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "\033[33m" << "WrongCat default constructor called"
			  << "\033[m" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "\033[33m" << "WrongCat destructor called"
			  << "\033[m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
	std::cout << "\033[33m" <<"WrongCat Copy constructor called"
			  << "\033[m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	std::cout << "\033[33m" << "WrongCat Copy assignment operator called"
			  << "\033[m" << std::endl;
    if (this != &other)
		WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const {
	std::cout << "\033[33m" << "Meow Meow" << "\033[m" << std::endl;
}
