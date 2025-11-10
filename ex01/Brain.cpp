#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\033[35m" << "Brain default constructor called"
			  << "\033[m" << std::endl;
}

Brain::~Brain() {
	std::cout << "\033[35m" << "Brain destructor called"
              << "\033[m" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "\033[35m" << "Brain Copy constructor called"
			  << "\033[m" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "\033[35m" << "Brain Copy assignment operator called" << "\033[m" << std::endl;
    if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
	}
    return *this;
}

bool Brain::setIdea(int &index, std::string &idea) {
	if (index < 0 || index >= 100)
		return false;
	_ideas[index] = idea;
	return true;
}

std::string Brain::getIdea(int &index) const {
	if (index < 0 || index >= 100)
		return "";
	return _ideas[index];
}
