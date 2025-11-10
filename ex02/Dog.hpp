#ifndef _DOG_H_
#define _DOG_H_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
