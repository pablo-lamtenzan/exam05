# include "ATarget.hpp"
# include "ASpell.hpp"
# include <iostream>

void ATarget::getHitBySpell(const ASpell& s) const
{ std::cout << type << " has been " << s.getEffects() << "\n"; }