#include "../class/ClapTrap.hpp"

//					//
//	Constructors	//
//					//

ClapTrap::ClapTrap(): m_name("ClapTrap"), m_life(10), m_mana(10), m_dmg(0) {
	std::cout << "Constructor by default call" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor call on: " << this->m_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src): m_name(src.m_name), m_life(src.m_life)
	, m_mana(src.m_mana), m_dmg(src.m_dmg) {
	std::cout << "Constructor by copy call" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const& src) {
	std::cout << "Constructor by assignement call" << std::endl;
	this->m_name = src.m_name;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
	return (*this);
}

ClapTrap::ClapTrap(std::string a_name): m_name(a_name), m_life(10), m_mana(10)
	, m_dmg(0) {
	std::cout << "Constructor surcharged call" << std::endl;
}

//				//
//	Functions	//
//				//

void	ClapTrap::attack(const std::string& target) {
	std:: cout << this->m_name << ": try to attack" << std::endl;
	if (m_life == 0)
	{
		std:: cout << this->m_name << ": "; 
		DisplayDeath();
		return;
	}
	if (this->m_mana == 0)
	{
		std:: cout << this->m_name << ": "; 
		DisplayNoEnergy();
		return ;
	}
	std:: cout << this->m_name << ": "; 
	DisplayAttack();
	std:: cout << target << ": take " << this->m_dmg << " dmg" << std::endl; 
	this->m_mana--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std:: cout << this->m_name << ": take " << amount << " dmg" << std::endl; 
	std:: cout << this->m_name << ": "; 
	this->m_life -= amount;
	if (this->m_life <= 0)
	{
		DisplayDeath();
		this->m_life = 0;
	}
	else
		DisplayTakeDmg();
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std:: cout << this->m_name << ": try to repair" << std::endl;
	if (this->m_life == 0)
	{
		std:: cout << this->m_name << ": "; 
		DisplayDeath();
		return ;
	}
	if (this->m_mana == 0)
	{
		std:: cout << this->m_name << ": ";
		DisplayNoEnergy();
		return ;
	}
	std:: cout << this->m_name << ": ";
	DisplayRepaired();
	this->m_mana--;
	this->m_life += amount;
}

//			//
//	Display	//
//			//

void	DisplayNoEnergy(void) {
	srand (time(NULL));
	int	i = rand() % 10;
	
	std::cout << "\e[93m";
	switch(i)
	{
		case 0:
			std::cout << "Where'd all my bullets go?" << std::endl;
			break;
		case 1:
			std::cout << "Bullets are dumb." << std::endl;
			break;
		case 2:
			std::cout << "Who needs ammo anyway, am I right?" << std::endl;
			break;
		case 3:
			std::cout << "I need tiny death pellets!" << std::endl;
			break;
		case 4:
			std::cout << "Need some ammo!" << std::endl;
			break;
		case 5:
			std::cout << "Dangit, I'm out!" << std::endl;
			break;
		case 6:
			std::cout << "Ammo reserves are spent!" << std::endl;
			break;
		case 7:
			std::cout << "Crap, no more shots left!" << std::endl;
			break;
		case 8:
			std::cout << "Hnngh! Empty!" << std::endl;
			break;
		default:
			std::cout << "Coming up empty!" << std::endl;
	}
	std::cout << "\e[39m";
	return ;
}

void	DisplayRepaired(void) {
	srand (time(NULL));
	int	i = rand() % 11;
	
	std::cout << "\e[92m";
	switch(i)
	{
		case 0:
			std::cout << "Hahaha... I ascend!" << std::endl;
			break;
		case 1:
			std::cout << "Ha ha ha! I LIVE! Hahaha!" << std::endl;
			break;
		case 2:
			std::cout << "Hahahahaha! I'm alive!" << std::endl;
			break;
		case 3:
			std::cout << "Good, I didn't want any spare parts!" << std::endl;
			break;
		case 4:
			std::cout << "Wow, that actually worked?" << std::endl;
			break;
		case 5:
			std::cout << "You can't keep a good 'bot down!" << std::endl;
			break;
		case 6:
			std::cout << "I'm back! Woo!" << std::endl;
			break;
		case 7:
			std::cout << "Holy crap, that worked?" << std::endl;
			break;
		case 8:
			std::cout << "Better lucky than good!" << std::endl;
			break;
		case 9:
			std::cout << "Back for more!" << std::endl;
			break;
		default:
			std::cout << "Here we go again!" << std::endl;
	}
	std::cout << "\e[39m";
	return ;
}

void	DisplayTakeDmg(void) {
	srand (time(NULL));
	int	i = rand() % 7;
	
	std::cout << "\e[91m";
	switch(i)
	{
		case 0:
			std::cout << "Why do I even feel pain?!" << std::endl;
			break;
		case 1:
			std::cout << "Why did they build me out of galvanized flesh?!" << std::endl;
			break;
		case 2:
			std::cout << "Ow hohoho, that hurts! Yipes!" << std::endl;
			break;
		case 3:
			std::cout << "My robotic flesh! AAHH!" << std::endl;
			break;
		case 4:
			std::cout << "Yikes! Ohhoho!" << std::endl;
			break;
		case 5:
			std::cout << "Woah! Oh! Jeez!" << std::endl;
			break;
		default:
			std::cout << "If only my chassis... weren't made of recycled human body parts! Wahahaha!" << std::endl;
	}
	std::cout << "\e[39m";
	return ;
}

void	DisplayAttack(void) {
	srand (time(NULL));
	int	i = rand() % 13;
	
	std::cout << "\e[95m";
	switch(i)
	{
		case 0:
			std::cout << "You call yourself a badass?" << std::endl;
			break;
		case 1:
			std::cout << "Wow, did I really do that?" << std::endl;
			break;
		case 2:
			std::cout << "Is it dead? Can, can I open my eyes now?" << std::endl;
			break;
		case 3:
			std::cout << "I didn't panic! Nope, not me!" << std::endl;
			break;
		case 4:
			std::cout << "Not so tough after all!" << std::endl;
			break;
		case 5:
			std::cout << "One down, any other takers?" << std::endl;
			break;
		case 6:
			std::cout << "I have gaskets tougher than you!" << std::endl;
			break;
		case 7:
			std::cout << "That was me! I did that!" << std::endl;
			break;
		case 8:
			std::cout << "Like running over a bug!" << std::endl;
			break;
		case 9:
			std::cout << "That was a close one!" << std::endl;
			break;
		case 10:
			std::cout << "Don't tell me that wasn't awesome!" << std::endl;
			break;
		case 11:
			std::cout << "Ha ha ha! Suck it!" << std::endl;
			break;
		case 12:
			std::cout << "Wait, did I really do that?" << std::endl;
			break;
		default:
			std::cout << "Holy moly!" << std::endl;
	}
	std::cout << "\e[39m";
	return ;
}

void	DisplayDeath(void) {
	srand (time(NULL));
	int	i = rand() % 21;
	
	std::cout << "\e[91m";
	switch(i)
	{
		case 0:
			std::cout << "I'll stop talking when I'm dead!" << std::endl;
			break;
		case 1:
			std::cout << "I'll die the way I lived: annoying!" << std::endl;
			break;
		case 2:
			std::cout << "This could've gone better!" << std::endl;
			break;
		case 3:
			std::cout << "You look like something a skag barfed up!" << std::endl;
			break;
		case 4:
			std::cout << "What's that smell? Oh wait, it's just you!" << std::endl;
			break;
		case 5:
			std::cout << "Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!" << std::endl;
			break;
		case 6:
			std::cout << "You're one screw short of a screw!" << std::endl;
			break;
		case 7:
			std::cout << "I bet your mom could do better!" << std::endl;
			break;
		case 8:
			std::cout << "You look like something a skag barfed up!" << std::endl;
			break;
		case 9:
			std::cout << "Oh yeah? Well, uh... yeah." << std::endl;
			break;
		case 10:
			std::cout << "What is that smell? Oh, never mind... it's just you!" << std::endl;
			break;
		case 11:
			std::cout << "I'm leaking!" << std::endl;
			break;
		case 12:
			std::cout << "Good thing I don't have a soul!" << std::endl;
			break;
		case 13:
			std::cout << "Aww!" << std::endl;
			break;
		case 14:
			std::cout << "Aww! Come on!" << std::endl;
			break;
		case 15:
			std::cout << "You can't kill me!" << std::endl;
			break;
		case 16:
			std::cout << "I'm too pretty to die!" << std::endl;
			break;
		case 17:
			std::cout << "Crap!" << std::endl;
			break;
		case 18:
			std::cout << "Robot down!" << std::endl;
			break;
		case 19:
			std::cout << "No, nononono NO!" << std::endl;
			break;
		case 20:
			std::cout << "I'll never go back to the bad place!" << std::endl;
			break;
		default:
			std::cout << "I have many regrets!" << std::endl;
	}
	std::cout << "\e[39m";
	return ;
}
