#include "WrongCat.hpp"

WrongCat::WrongCat() : AWrongAnimal("WrongCat") {
	std::cout << "\033[33m" << "WrongCat default constructor called"
			  << "\033[m" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "\033[33m" << "WrongCat destructor called"
			  << "\033[m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : AWrongAnimal(other) {
	std::cout << "\033[33m" <<"WrongCat Copy constructor called"
			  << "\033[m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	std::cout << "\033[33m" << "WrongCat Copy assignment operator called"
			  << "\033[m" << std::endl;
    if (this != &other)
		AWrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const {
	std::cout << "\033[33m" << "Meow Meow" << "\033[m" << std::endl;
}
