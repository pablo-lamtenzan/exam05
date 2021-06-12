# include "ASpell.hpp"
# include "ATarget.hpp"

void ASpell::launch(const ATarget& t) const
{ t.getHitBySpell(*this); }