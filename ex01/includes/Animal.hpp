/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:29:23 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/13 20:03:22 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
	std::string	_type;

	public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &other);
	virtual ~Animal();

	Animal			&operator=(Animal const &other);
	
	void			setType(std::string type);
	std::string		getType(void) const;
	virtual	void	makeSound() const;
}	;

#endif