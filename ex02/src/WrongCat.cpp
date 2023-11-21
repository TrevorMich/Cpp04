/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:20:45 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/21 14:20:45 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name) {

	std::cout << "WrongCat copy constructor with arg called\n";
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other) {

	std::cout << "WrongCat copy constructor called\n";
	*this = other;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &other) {

	if (this == &other)
		return	*this;
	this->_type = other.getType();
	return	*this;
}

void	WrongCat::makeSound() const {
	
	std::cout << "meow meow...\n";
}