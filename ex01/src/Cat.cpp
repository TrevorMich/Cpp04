/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:42:14 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/13 20:29:40 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {

	std::cout << "Cat constructor called\n";
	this->_brain = new Brain();
}

Cat::Cat(std::string name) : Animal(name) {

	std::cout << "Cat copy constructor with arg called\n";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &other) : Animal(other) {

	std::cout << "Cat copy constructor called\n";
	this->_brain = NULL;
	*this = other;
}

Cat::~Cat() {

	std::cout << "Cat destructor called\n";
	delete this->_brain;
}

Cat	&Cat::operator=(Cat const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();

	
	if (this->_brain != NULL)
		delete this->_brain;	
	this->_brain = new Brain(*other._brain);
	return	*this;
}

void	Cat::makeSound() const {
	
	std::cout << "meow..\n";
}

void	Cat::setIdeas(int index, std::string idea) {

	this->_brain->setIdeas(index, idea);
}

std::string	Cat::getIdeas(int index) {
	return this->_brain->getIdeas(index);
}