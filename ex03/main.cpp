#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
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
        for (int i = 0; i < 100; i++)
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