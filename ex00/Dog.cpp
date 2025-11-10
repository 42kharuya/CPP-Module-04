#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[34m" << "Dog default constructor called"
			  << "\033[m" << std::endl;
}

Dog::~Dog() {
	std::cout << "\033[34m" << "Dog destructor called"
			  << "\033[m" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "\033[34m" <<"Dog Copy constructor called"
			  << "\033[m" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "\033[34m" << "Dog Copy assignment operator called"
			  << "\033[m" << std::endl;
    if (this != &other)
		Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const {
	std::cout << "\033[34m" << "Bow Wow" << "\033[m" << std::endl;
}
