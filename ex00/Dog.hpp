#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.hpp"

class Dog : public Animal {
	public:
	 Dog();
	 ~Dog();
	 Dog(const Dog &other);
	 Dog& operator=(const Dog &other);

	 void makeSound() const;
};

#endif // _DOG_H_