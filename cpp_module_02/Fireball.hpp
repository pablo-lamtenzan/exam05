# pragma once

# include "ASpell.hpp"

struct Fireball : public ASpell
{
    Fireball() : ASpell("Fireball", "burnt to a crisp") { }
    ~Fireball() { }
    ASpell* clone() const { return new Fireball(); }
};