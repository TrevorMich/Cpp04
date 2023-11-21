/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:56:50 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/05 17:57:05 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:

public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(WrongCat const &other);
	virtual ~WrongCat();

	WrongCat	&operator=(WrongCat const &other);
	void		makeSound() const;

};

#endif