#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
        : ClapTrap("Default_clap_name"), 
        ScavTrap("Default"),
        FragTrap("Default"), 
        _name("Default")
{
    std::cout << "DiamondTrap: default constructor is called" << std::endl;
    this->_hp = FragTrap::_hp;
    this->_energy = ScavTrap::_energy;
    this->_attack_dmg = FragTrap::_attack_dmg;
    return ;
}

DiamondTrap::DiamondTrap(std::string name)
        : ClapTrap(name + "_clap_name"),
        ScavTrap(name),
        FragTrap(name),
        _name(name)
{
    std::cout << "DiamondTrap: Constructor with string as a parameter is called" << std::endl;
    this->_hp = FragTrap::_hp;
    this->_energy = ScavTrap::_energy;
    this->_attack_dmg = FragTrap::_attack_dmg;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap: Destructor is called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
        : ClapTrap(other._name + "_clap_name"),
        ScavTrap(other._name),
        FragTrap(other._name),
        _name(other._name)
{
    std::cout << "DiamondTrap: Copy constructor is called" << std::endl;
    this->_hp = other._hp;
    this->_energy = other._energy;
    this->_attack_dmg = other._attack_dmg;
    return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _name = other._name;
    }
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Diamond Trap's name: " << this->_name;
    std::cout << " and its ClapTrap name: " << ClapTrap::_name << std::endl;
    return ;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
    return ;
}