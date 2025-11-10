#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain()) {
	std::cout << "\033[34m" << "Dog default constructor called"
			  << "\033[m" << std::endl;
}

Dog::~Dog() {
	std::cout << "\033[34m" << "Dog destructor called"
			  << "\033[m" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other) : AAnimal(other), _brain(new Brain(*(other._brain))) {
	std::cout << "\033[34m" <<"Dog Copy constructor called"
			  << "\033[m" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "\033[34m" << "Dog Copy assignment operator called"
			  << "\033[m" << std::endl;
    if (this != &other)
	{
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*(other._brain));
	}
    return *this;
}

void Dog::makeSound() const {
	std::cout << "\033[34m" << "Bow Wow" << "\033[m" << std::endl;
}
