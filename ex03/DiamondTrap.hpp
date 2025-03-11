#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        virtual ~DiamondTrap(void);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);

        void whoAmI(void);
        virtual void attack(const std::string &target);
};

#endif