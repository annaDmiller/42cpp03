#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap first("Albert");
    ClapTrap second("Shane");

    std::cout << std::endl;
    first.attack("Shane");

    std::cout << std::endl;
    second.takeDamage(3);

    std::cout << std::endl;
    second.beRepaired(5);
    return (0);
}