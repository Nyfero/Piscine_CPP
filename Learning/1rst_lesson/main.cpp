#include "Arme.hpp"
#include "Personnage.hpp"
#include <string>
#include <iostream>

int main()
{
    //Création des personnages
    Personnage david, goliath("Epee aiguisee", 20);
 
    //Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
 
    //Temps mort ! Voyons voir la vie de chacun…
    std::cout << "David" << std::endl;
    david.afficherEtat();
    std::cout << std::endl << "Goliath" << std::endl;
    goliath.afficherEtat();
 
    return 0;
}
