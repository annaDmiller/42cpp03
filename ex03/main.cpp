#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "CLAPTRAP TEST" << std::endl;
    {
        ClapTrap first("Albert");
        ClapTrap second("Shane");

        std::cout << std::endl;
        first.attack("Shane");

        std::cout << std::endl;
        second.takeDamage(3);

        std::cout << std::endl;
        second.beRepaired(5);

        std::cout << std::endl;
        for (int i = 0; i < 10; i++)
            first.attack("Shane");

        std::cout << std::endl;
        second.takeDamage(100);
        second.beRepaired(10);
        second.attack("First");
    
        std::cout << std::endl;
    }
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "SCAVTRAP TEST" << std::endl;
    {
        ScavTrap first("First");
        ScavTrap second("Second");

        std::cout << std::endl;
        first.attack("Second");

        std::cout << std::endl;
        second.takeDamage(20);

        std::cout << std::endl;
        second.beRepaired(10);

        std::cout << std::endl;
        second.guardGate();

        std::cout << std::endl;
        for (int i = 0; i < 50; i++)
            first.attack("Second");

        std::cout << std::endl;
        std::cout << "Copying ScavTrap..." << std::endl;
        ScavTrap copyScav(second);
        copyScav.attack("Dummy Target");

        std::cout << std::endl;
        std::cout << "Assigning ScavTrap..." << std::endl;
        ScavTrap assignedScav = first;
        assignedScav.attack("Another Target");

        std::cout << std::endl;
        second.takeDamage(100);
        second.beRepaired(10);
        second.attack("First");

        std::cout << std::endl;
    }
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "FRAGTRAP TEST" << std::endl;
    {
        FragTrap first("First");
        FragTrap second("Second");

        std::cout << std::endl;
        first.attack("Second");

        std::cout << std::endl;
        second.takeDamage(30);

        std::cout << std::endl;
        second.beRepaired(10);

        std::cout << std::endl;
        second.highFivesGuys();

        std::cout << std::endl;
        for (int i = 0; i < 100; i++)
            first.attack("Second");

        std::cout << std::endl;
        std::cout << "Copying FragTrap..." << std::endl;
        FragTrap copyFrag(second);
        copyFrag.attack("Dummy Target");

        std::cout << std::endl;
        std::cout << "Assigning FragTrap..." << std::endl;
        FragTrap assignedFrag = first;
        assignedFrag.attack("Another Target");

        std::cout << std::endl;
        second.takeDamage(100);
        second.beRepaired(10);
        second.attack("First");

        std::cout << std::endl;
    }
    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "DIAMOND TEST" << std::endl;
    {
        DiamondTrap first("First");
        DiamondTrap second("Second");

        std::cout << std::endl;
        first.attack("Second");

        std::cout << std::endl;
        second.takeDamage(30);

        std::cout << std::endl;
        second.beRepaired(10);

        std::cout << std::endl;
        second.highFivesGuys();

        std::cout << std::endl;
        second.guardGate();

        std::cout << std::endl;
        for (int i = 0; i < 51; i++)
            first.attack("Second");

        std::cout << std::endl;
        std::cout << "Copying DiamondTrap..." << std::endl;
        DiamondTrap copyDiam(second);
        copyDiam.attack("Dummy Target");

        std::cout << std::endl;
        std::cout << "Assigning DiamondTrap..." << std::endl;
        FragTrap assignedDiam = first;
        assignedDiam.attack("Another Target");

        std::cout << std::endl;
        second.takeDamage(100);
        second.beRepaired(10);
        second.attack("First");

        std::cout << std::endl;
        first.whoAmI();

        std::cout << std::endl;
    }
    return (0);
}