#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
	 Dog();
	 ~Dog();
	 Dog(const Dog &other);
	 Dog& operator=(const Dog &other);

	 void makeSound() const;

	private:
	 Brain *_brain;
};

#endif // _DOG_H_
