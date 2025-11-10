#ifndef _A_ANIMAL_H_
#define _A_ANIMAL_H_

#include <iostream>
#include <string>

class AAnimal
{
	public:
	 AAnimal();
	 AAnimal(const std::string &type);
	 virtual ~AAnimal();
	 AAnimal(const AAnimal &other);
	 AAnimal& operator=(const AAnimal &other);

	 std::string getType() const;
	 virtual void makeSound() const = 0;

	protected:
	 std::string _type;
};

#endif // _A_ANIMAL_H_
