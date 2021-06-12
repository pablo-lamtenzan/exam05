# pragma once

# include "ASpell.hpp"
# include <map>

class SpellBook
{
    SpellBook(const SpellBook&);
    SpellBook& operator=(const SpellBook&);
    
    typedef std::map<std::string, ASpell*> map;

    map spells;

    public:

    SpellBook() { }
    
    ~SpellBook()
    {
        for (map::iterator it = spells.begin() ;
        it != spells.end() ; it++)
            delete it->second;
    }

    void learnSpell(ASpell* s)
    {
        const map::iterator& it = spells.find(s->getName());
        if (it == spells.end())
            spells[s->getName()] = s->clone();
    }

    void forgetSpell(const std::string& s)
    {
        const map::iterator& it = spells.find(s);
        if (it != spells.end())
        {
            delete it->second;
            spells.erase(it);
        }
    }

    ASpell* createSpell(const std::string& s)
    {
        const map::iterator& it = spells.find(s);
        return it != spells.end() ? it->second : NULL;
    }
};