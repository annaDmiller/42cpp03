#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap: default constructor is called" << std::endl;
    this->_hp = 100;
    this->_energy = 50;
    this->_attack_dmg = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: Constructor with string as a parameter is called" << std::endl;
    this->_hp = 100;
    this->_energy = 50;
    this->_attack_dmg = 20;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap: Destructor is called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap: Copy constructor is called" << std::endl;
    return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hp == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and can't attack " << target << std::endl;
        return ;
    }
    if (this->_energy == 0)
    {
        std::cout << "ScavTrap " << this->_name << " doesn't have enough energy to attack " << target << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
    this->_energy--;
    std::cout << "DEBUG: energy left - " << this->_energy << std::endl;
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
    return ;
}