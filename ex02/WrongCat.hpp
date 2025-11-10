#ifndef _WRONG_CAT_H_
#define _WRONG_CAT_H_

#include "AWrongAnimal.hpp"

class WrongCat : public AWrongAnimal {
	public:
	 WrongCat();
	 ~WrongCat();
	 WrongCat(const WrongCat &other);
	 WrongCat& operator=(const WrongCat &other);

	 void makeSound() const;
};

#endif // _WRONG_CAT_H_
