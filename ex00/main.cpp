#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "\033[31m" << "RED" << "\033[m" << ": Animal Class, Wrong Animal Class" << std::endl;
	std::cout << "\033[34m" << "PURPLE" << "\033[m" << ": Dog Class" << std::endl;
	std::cout << "\033[33m" << "YELLOW" << "\033[m" << ": Cat Class, Wrong Cat Class" << std::endl;

	{
		std::cout << "------------------ using Class: Animal ------------------" << std::endl;
		Animal animal1;
		Animal animal2("Animal2");

		animal1.makeSound();
		animal2.makeSound();
	}

	{
		std::cout << "\n------------------ using Class: Cat, Dog ------------------" << std::endl;
		Cat cat;
		Dog dog;

		cat.makeSound();
		dog.makeSound();
	}

	{
		std::cout << "\n------------------  with \"virtual\" ------------------" << std::endl;
		const Animal* animal1 = new Animal();
		const Animal* animal2 = new Cat();
		std::cout << animal2->getType() << " " << std::endl;
		animal2->makeSound();
		animal1->makeSound();

		delete animal1;
		delete animal2;
	}

	{
		std::cout << "\n------------------ without \"virtual\" ------------------" << std::endl;
		const WrongAnimal* wrongAnimal1 = new WrongAnimal();
		const WrongAnimal* wrongAnimal2 = new WrongCat();
		std::cout << wrongAnimal2->getType() << " " << std::endl;
		wrongAnimal2->makeSound();
		wrongAnimal1->makeSound();

		delete wrongAnimal1;
		delete wrongAnimal2;
	}
}
