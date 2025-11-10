#ifndef _WRONG_ANIMAL_H_
#define _WRONG_ANIMAL_H_

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
	 WrongAnimal();
	 WrongAnimal(const std::string &type);
	 ~WrongAnimal();
	 WrongAnimal(const WrongAnimal &other);
	 WrongAnimal& operator=(const WrongAnimal &other);

	 std::string getType() const;
	 void makeSound() const;

	protected:
	 std::string _type;
};

#endif // _WRONG_ANIMAL_H_
