/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaslefrancq <lucaslefrancq@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:20:46 by lucaslefran       #+#    #+#             */
/*   Updated: 2020/12/09 15:49:39 by lucaslefran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	// For generating random numbers in vaulthunterDotExe and challengeNewcomer
	srand(time(0));
	
	
	std::cout << "---------- FRAGTRAP TESTS ----------\n\n";
	
	FragTrap idiot("Idiot");
	idiot.meleeAttack("Handsome Jack");
	idiot.rangedAttack("Handsome Jack");
	std::cout << std::endl;

	idiot.takeDamage(1);
	idiot.takeDamage(40);
	idiot.beRepaired(30);
	idiot.beRepaired(100);
	
	std::cout << std::endl;
	idiot.vaulthunterDotExe("Handsome Jack");
	idiot.vaulthunterDotExe("Baron Flynt");
	idiot.vaulthunterDotExe("Roid Rage Psycho");
	idiot.vaulthunterDotExe("Pinky");
	idiot.vaulthunterDotExe("Mad Mel");
	
	std::cout << std::endl;
	idiot.beRecharged(50);
	idiot.beRecharged(100);


	std::cout << "\n\n---------- SCAVTRAP TESTS ----------\n\n";
	
	ScavTrap dumbass("Dumbass");
	dumbass.meleeAttack("Handsome Jack");
	dumbass.rangedAttack("Handsome Jack");
	std::cout << std::endl;

	dumbass.takeDamage(1);
	dumbass.takeDamage(40);
	dumbass.beRepaired(30);
	dumbass.beRepaired(100);
	
	std::cout << std::endl;
	dumbass.challengeNewcomer("Handsome Jack");
	dumbass.challengeNewcomer("Baron Flynt");
	dumbass.challengeNewcomer("Roid Rage Psycho");
	dumbass.challengeNewcomer("Pinky");
	dumbass.challengeNewcomer("Mad Mel");
	
	std::cout << std::endl;
	dumbass.beRecharged(50);
	dumbass.beRecharged(100);


	std::cout << "\n\n---------- CLAPTRAP TESTS ----------\n\n";
	
	ClapTrap stupid("Stupid");
	stupid.meleeAttack("Handsome Jack");
	stupid.rangedAttack("Handsome Jack");
	std::cout << std::endl;

	stupid.takeDamage(1);
	stupid.takeDamage(40);
	stupid.beRepaired(30);
	stupid.beRepaired(100);
	
	std::cout << std::endl;
	stupid.beRecharged(50);
	stupid.beRecharged(100);

	std::cout << "\n\n---------- NINJATRAP TESTS ----------\n\n";
	
	NinjaTrap retard("Retard");
	retard.meleeAttack("Handsome Jack");
	retard.rangedAttack("Handsome Jack");
	std::cout << std::endl;

	retard.takeDamage(1);
	retard.takeDamage(40);
	retard.beRepaired(30);
	retard.beRepaired(100);
	
	std::cout << std::endl;
	retard.ninjaShoebox(idiot);
	retard.ninjaShoebox(dumbass);
	retard.ninjaShoebox(stupid);
	retard.ninjaShoebox(retard);
	
	std::cout << std::endl;
	retard.beRecharged(50);
	retard.beRecharged(100);
	std::cout << std::endl;
	
	return (0);
}