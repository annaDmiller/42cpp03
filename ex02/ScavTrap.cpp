#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap: default constructor is called" << std::endl;
    this->setHealth(100);
    this->setEnergy(50);
    this->setDamage(20);
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: Constructor with string as a parameter is called" << std::endl;
    this->setHealth(100);
    this->setEnergy(50);
    this->setDamage(20);
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
    std::string name = this->getName();

    if (this->getHealth() == 0)
    {
        std::cout << "ScavTrap " << name << " is dead and can't attack " << target << std::endl;
        return ;
    }
    if (this->getEnergy() == 0)
    {
        std::cout << "ScavTrap " << name << " doesn't have enough energy to attack " << target << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target;
    std::cout << ", causing " << this->getDamage() << " points of damage!" << std::endl;
    this->setEnergy(this->getEnergy() - 1);
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
    return ;
}