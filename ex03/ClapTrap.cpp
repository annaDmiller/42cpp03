#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _energy(10), _attack_dmg(0)
{
    std::cout << "ClapTrap: Default constructor with no arguements is called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack_dmg(0)
{
    std::cout << "ClapTrap: Constructor with string as a parameter is called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap: Destructor is called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hp(other._hp), _energy(other._energy), _attack_dmg(other._attack_dmg)
{
    std::cout << "ClapTrap: Copy constructor is called" << std::endl;
    return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hp = other._hp;
        this->_energy = other._energy;
        this->_attack_dmg = other._attack_dmg;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hp == 0)
    {
        std::cout << this->_name << " is dead and can't attack " << target << std::endl;
        return ;
    }
    if (this->_energy == 0)
    {
        std::cout << this->_name << " doesn't have enough energy to attack " << target << std::endl;
        return ;
    }
    std::cout << this->_name << " attacks " << target;
    std::cout << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
    this->_energy--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp == 0)
    {
        std::cout << this->_name << " is already dead" << std::endl;
        return ;
    }
    if (this->_hp < amount)
        this->_hp = 0;
    else
        this->_hp -= amount;
    std::cout << "Now " << this->_name << " has " << this->_hp << " hit points of health" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hp == 0)
    {
        std::cout << this->_name << " is already dead and can't be repaired" << std::endl;
        return ;
    }
    if (this->_energy == 0)
    {
        std::cout << this->_name << " doesn't have enough energy to be repaired" << std::endl;
        return ;
    }
    std::cout << this->_name << " has been repaired and gets " << amount << " hit points back" << std::endl;
    this->_hp += amount;
    this->_energy--;
    std::cout << "Now " << this->_name << " has " << this->_hp << " hit points of health" << std::endl;
    return ;
}
