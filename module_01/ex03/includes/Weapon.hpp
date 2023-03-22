#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

# define EGGPLANT "\U0001F346";
# define WRENCH "\U0001F527";

class	Weapon 
{
		private:
			std::string			_type;
		public:
			Weapon(std::string type);
			~Weapon(void);

			const std::string	&getType(void) const;
			void				setType(std::string new_type);
};



#endif /* WEAPON_HPP */