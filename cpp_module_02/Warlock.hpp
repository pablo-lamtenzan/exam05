# pragma once

# include <string>
# include <iostream>
# include "ATarget.hpp"
# include "SpellBook.hpp"
# include <map>

class Warlock
{
    std::string name;
    std::string title;

    Warlock();
    Warlock(const Warlock&);
    Warlock& operator=(const Warlock&);

    SpellBook spells;

    public:

    Warlock(const std::string& n, const std::string& t)
    : name(n), title(t)
    { std::cout << name << ": This looks like another boring day.\n"; }

    ~Warlock()
    { std::cout << name << ": My job is done!\n"; }

    void introduce() const { std::cout << name << ": I am " << name << ", " << title << "!\n"; }

    const std::string& getName() const { return name; }
    const std::string& getTitle() const { return title; }

    void setTitle(const std::string& s) { title = s; }

    void learnSpell(ASpell* s)
    { spells.learnSpell(s); }

    void forgetSpell(const std::string& s)
    { spells.forgetSpell(s); }

    void launchSpell(const std::string& s, const ATarget& t)
    {
        ASpell* spell = spells.createSpell(s);
        if (spell)
            spell->launch(t);
    }
};