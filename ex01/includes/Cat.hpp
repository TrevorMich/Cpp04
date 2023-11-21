/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:36:07 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/13 20:07:16 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
	Brain	*_brain;
	
	public:
	Cat();
	Cat(std::string type);
	Cat(Cat const &other);
	virtual ~Cat();

	Cat			&operator=(Cat const &other);
	void		makeSound() const;
	void		setIdeas(int index, std::string idea);
	std::string	getIdeas(int index);

}	;

#endif