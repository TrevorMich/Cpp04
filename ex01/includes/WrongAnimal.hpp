
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &other);
	virtual ~WrongAnimal();

	WrongAnimal			&operator=(WrongAnimal const &other);
	
	void			setType(std::string type);
	std::string		getType(void) const;
	void			makeSound() const;
};

#endif