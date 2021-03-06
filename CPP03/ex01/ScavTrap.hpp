/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaslefrancq <lucaslefrancq@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:21:34 by lucaslefran       #+#    #+#             */
/*   Updated: 2020/12/09 11:13:19 by lucaslefran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap
{
	private:

		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
		std::string		_specialChallenges[5];
		
	public:	
	
		// Constructors
		ScavTrap(const std::string& name = "ScavTrap");
		
		// Copy constructor / destructor / assignment operator
		ScavTrap(const ScavTrap& copyObj);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap assignObj);
		void swap(ScavTrap& first, ScavTrap& second);
	
		// Methods
		void rangedAttack(const std::string& target) const;
		void meleeAttack(const std::string& target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void beRecharged(unsigned int amount);
		void challengeNewcomer(const std::string& target);
};

#endif