#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
    return (0);
}