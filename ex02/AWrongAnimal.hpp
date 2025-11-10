#ifndef _A_WRONG_ANIMAL_H_
#define _A_WRONG_ANIMAL_H_

#include <iostream>
#include <string>

class AWrongAnimal
{
	public:
	 AWrongAnimal();
	 AWrongAnimal(const std::string &type);
	 ~AWrongAnimal();
	 AWrongAnimal(const AWrongAnimal &other);
	 AWrongAnimal& operator=(const AWrongAnimal &other);

	 std::string getType() const;
	 void makeSound() const;

	protected:
	 std::string _type;
};

#endif // _A_WRONG_ANIMAL_H_
