#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
#include <string>

class Animal
{
	public:
	 Animal();
	 Animal(const std::string &type);
	 virtual ~Animal();
	 Animal(const Animal &other);
	 Animal& operator=(const Animal &other);

	 virtual void makeSound() const;

	protected:
	 std::string _type;
};

#endif // _ANIMAL_H_