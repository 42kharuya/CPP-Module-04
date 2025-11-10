#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()) {
	std::cout << "\033[33m" << "Cat default constructor called"
			  << "\033[m" << std::endl;
}

Cat::~Cat() {
	std::cout << "\033[33m" << "Cat destructor called"
			  << "\033[m" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) : AAnimal(other), _brain(new Brain(*(other._brain))) {
	std::cout << "\033[33m" <<"Cat Copy constructor called"
			  << "\033[m" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	std::cout << "\033[33m" << "Cat Copy assignment operator called"
			  << "\033[m" << std::endl;
    if (this != &other)
	{
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*(other._brain));
	}
    return *this;
}

void Cat::makeSound() const {
	std::cout << "\033[33m" << "Meow Meow" << "\033[m" << std::endl;
}
