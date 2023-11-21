/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:33:34 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/11 20:25:49 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
	private:
	Brain	*_brain;

	public:
	Dog();
	Dog(std::string type);
	Dog(Dog const &other);
	virtual ~Dog();

	Dog		&operator=(Dog const &other);
	void	makeSound() const;
	void		setIdeas(int index, std::string idea);
	std::string	getIdeas(int index);
	
}	;

#endif