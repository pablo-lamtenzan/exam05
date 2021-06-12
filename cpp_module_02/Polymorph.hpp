# pragma once

# include "ASpell.hpp"

struct Polymorph
: ASpell
{
    Polymorph() : ASpell("Polymorph", "turned into a critter") { }
    ~Polymorph() { }
    ASpell* clone() const { return new Polymorph(); }
};