#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap: default constructor is called" << std::endl;
    this->_hp = 100;
    this->_energy = 100;
    this->_attack_dmg = 30;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap: Constructor with string as a parameter is called" << std::endl;
    this->_hp = 100;
    this->_energy = 100;
    this->_attack_dmg = 30;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap: Destructor is called" << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap: Copy constructor is called" << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: Hey! Who wants a high five?" << std::endl;
    return ;
}