/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:05:39 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/25 14:25:26 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Annie_clap_name"), ScavTrap("Annie_clap_name"), FragTrap("Annie_clap_name"),  _name("Annie")	{
	this->_health = FragTrap::getHealth();
	this->_stamina = ScavTrap::getStamina();
	this->_attack = FragTrap::getAttack();
	std::cout << "Diamondtrap " << _name << " is born !" << std::endl;

	return;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"),  _name(name)	{
	this->_health = FragTrap::getHealth();
	this->_stamina = ScavTrap::getStamina();
	this->_attack = FragTrap::getAttack();
	std::cout << "Diamondtrap " << _name << " is born !" << std::endl;

	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src)	{
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	if (this != &src)
		*this = src;

	return;
}

DiamondTrap::~DiamondTrap()	{
	std::cout << "DiamondTrap " << _name << " turned back into a dust thing." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap & src)	{
	if (this != &src)	{
		_name = src.getName();
		this->ClapTrap::_name = src.ClapTrap::getName();
		_health = src.getHealth();
		_stamina = src.getStamina();
		_attack = src.getAttack();
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string & target)	{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()	{
	std::cout << "DiamondTrap name : " << _name << ", ClapTrap name : " << ClapTrap::_name << "." << std::endl;

	return;
}

std::string	DiamondTrap::getName() const	{
	return _name;
}