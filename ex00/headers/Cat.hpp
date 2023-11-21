/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:36:07 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/05 17:44:26 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	
	public:
	Cat();
	Cat(std::string type);
	Cat(Cat const &other);
	virtual ~Cat();

	Cat		&operator=(Cat const &other);
	void	makeSound() const;

}	;

#endif