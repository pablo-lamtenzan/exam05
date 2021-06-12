# pragma once

# include <string>

class ATarget;

class ASpell
{
    std::string name;
    std::string effects;

    public:

    ASpell() { }
    ASpell(const std::string& n, const std::string e)
    : name(n), effects(e)
    { }
    ASpell(const ASpell& o) { *this = o; }
    ASpell& operator=(const ASpell& o)
    {
        name = o.getName();
        effects = o.getEffects();
        return (*this);
    }

    virtual ~ASpell() { }

    const std::string& getName() const { return name; }
    const std::string& getEffects() const { return effects; }

    void launch(const ATarget& t) const;

    virtual ASpell* clone() = 0;


};