# pragma once

# include <string>
# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"
# include <map>

class Warlock
{
    std::string name;
    std::string title;

    Warlock();
    Warlock(const Warlock&);
    Warlock& operator=(const Warlock&);

    std::map<std::string, ASpell*> spells;

    public:

    Warlock(const std::string& n, const std::string& t)
    : name(n), title(t)
    { std::cout << name << ": This looks like another boring day.\n"; }

    ~Warlock()
    {
        std::cout << name << ": My job is done!\n";
        for (std::map<std::string, ASpell*>::iterator it = spells.begin() ;
        it != spells.end() ; it++)
            delete it->second;
    }

    void introduce() const { std::cout << name << ": I am " << name << ", " << title << "!\n"; }

    const std::string& getName() const { return name; }
    const std::string& getTitle() const { return title; }

    void setTitle(const std::string& s) { title = s; }

    void learnSpell(ASpell* s)
    {
        const std::map<std::string, ASpell*>::const_iterator& it = spells.find(s->getName());
        if (it == spells.end())
            spells[s->getName()] = s->clone();
    }
    void forgetSpell(const std::string& s)
    {
        const std::map<std::string, ASpell*>::const_iterator& it = spells.find(s);
        if (it != spells.end())
        {
            delete it->second;
            spells.erase(s);
        }
    }
    void launchSpell(const std::string& s, const ATarget& t)
    {
        const std::map<std::string, ASpell*>::const_iterator& it = spells.find(s);
        if (it != spells.end())
            it->second->launch(t);
    }
};