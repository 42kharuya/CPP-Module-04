#ifndef _BRAIN_H_
#define _BRAIN_H_

#include <string>
#include <iostream>

class Brain
{
	public:
	 Brain();
	 ~Brain();
	 Brain(const Brain &other);
	 Brain& operator=(const Brain &other);

	 bool setIdea(int &index, std::string &idea);
	 std::string getIdea(int &index) const;

	private:
	 std::string _ideas[100];
};

#endif // _BRAIN_H_
