/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:47:14 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/05 17:59:24 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongCat.hpp"


int main()
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "ANIMAL\n";
	std::cout << partition << std::endl;

	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl; 
		dog->makeSound(); //will output the dog sound!
		cat->makeSound();
		meta->makeSound();
		delete meta;
		delete dog;
		delete cat;
	}
	
	std::cout << partition << std::endl;
	std::cout << "WRONGANIMAL\n";
	std::cout << partition << std::endl;

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		std::cout << cat->getType() << " " << std::endl; 
		cat->makeSound();
		meta->makeSound();
		delete meta;
		delete cat;
	}

	return 0;

}