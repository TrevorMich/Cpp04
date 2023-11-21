/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:42:14 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/05 17:44:27 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat() : Animal() {

	std::cout << "Cat constructor called\n";
}

Cat::Cat(std::string name) : Animal(name) {

	std::cout << "Cat copy constructor with arg called\n";
}

Cat::Cat(Cat const &other) : Animal(other) {

	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat::~Cat() {

	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();
	return	*this;
}

void	Cat::makeSound() const {
	
	std::cout << "meow..\n";
}