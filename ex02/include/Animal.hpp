/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:21:21 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/21 14:21:21 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
private:

protected:
	std::string _type;

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &other);
	virtual ~Animal();

	Animal			&operator=(Animal const &other);
	
	void			setType(std::string type);
	std::string		getType(void) const;
	virtual	void	makeSound() const = 0;
};

#endif