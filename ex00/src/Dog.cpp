/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:44:53 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/05 17:45:37 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog() : Animal() {

	std::cout << "Dog constructor called\n";
}

Dog::Dog(std::string name) : Animal(name) {

	std::cout << "Dog copy constructor with arg called\n";
}

Dog::Dog(Dog const &other) : Animal(other) {

	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog::~Dog() {

	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();
	return	*this;
}

void	Dog::makeSound() const {
	
	std::cout << "Wuff Wuff...\n";
}