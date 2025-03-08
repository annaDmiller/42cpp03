#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _energy;
        unsigned int    _attack_dmg;

    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setHealth(unsigned int amount);
        void setEnergy(unsigned int amount);
        void setDamage(unsigned int amount);

        std::string getName(void) const;
        unsigned int getHealth(void) const;
        unsigned int getEnergy(void) const;
        unsigned int getDamage(void) const;
};

#endif