# pragma once

# include "ASpell.hpp"

struct Fwoosh : public ASpell
{
    Fwoosh() : ASpell("Fwoosh", "fwooshed") { }
    ~Fwoosh() { }
    ASpell* clone() const { return new Fwoosh(); }
};