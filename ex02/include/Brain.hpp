/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:21:29 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/21 14:21:29 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <string>
# include <iostream>

class Brain {
private:
	std::string	_ideas[100];

public:
	Brain();
	Brain(Brain const &other);
	~Brain();

	Brain		&operator=(Brain const &other);
	void		setIdeas(int index, std::string idea);
	std::string	getIdeas(int index);
};

#endif