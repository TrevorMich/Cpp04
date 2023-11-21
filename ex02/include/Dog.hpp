/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:21:41 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/21 14:21:41 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_hpp
# define Dog_hpp
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
private:
	Brain	*_brain;

public:
	Dog();
	Dog(std::string type);
	Dog(Dog const &other);
	virtual ~Dog();

	Dog			&operator=(Dog const &other);
	void		makeSound() const;
	void		setIdeas(int index, std::string idea);
	std::string	getIdeas(int index);
	
};

#endif