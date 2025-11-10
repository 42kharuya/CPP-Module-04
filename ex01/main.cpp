#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "\033[31m" << "RED" << "\033[m" << ": Animal Class, Wrong Animal Class" << std::endl;
	std::cout << "\033[34m" << "PURPLE" << "\033[m" << ": Dog Class" << std::endl;
	std::cout << "\033[33m" << "YELLOW" << "\033[m" << ": Cat Class, Wrong Cat Class" << std::endl;

	std::cout << "\n------------------  memory leak check ------------------" << std::endl;
	const Animal* animal1 = new Animal();
	std::cout << std::endl;

	const Animal* animal2 = new Cat();
	std::cout << std::endl;

	const Animal* animal3 = new Dog();
	std::cout << std::endl;

	std::cout << "\n------------------  make sound ------------------" << std::endl;
	animal1->makeSound();
	animal2->makeSound();
	animal3->makeSound();

	std::cout << "\n------------------  destructor ------------------" << std::endl;
	delete animal1;
	delete animal2;
	delete animal3;
}
