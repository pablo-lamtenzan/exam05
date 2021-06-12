# pragma once

# include "ASpell.hpp"

struct Fwoosh : public ASpell
{
    Fwoosh() : ASpell("Fwoosh", "fwooshed") { }
    ~Fwoosh() { }
    ASpell* clone() { return new Fwoosh(); }
};