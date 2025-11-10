#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
	 Cat();
	 ~Cat();
	 Cat(const Cat &other);
	 Cat& operator=(const Cat &other);

	 void makeSound() const;

	private:
	 Brain *_brain;
};

#endif // _CAT_H_
