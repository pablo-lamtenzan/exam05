
# include <string>

class ASpell;
# pragma once

class ATarget
{
    std::string type;

    public:

    ATarget() { }
    ATarget(const std::string& t) : type(t) { }
    ATarget(const ATarget& o) { *this = o; }
    ATarget& operator=(const ATarget& o)
    {
        type = o.getType();
        return *this;
    }
    virtual ~ATarget() { }

    const std::string& getType() const { return type; }

    void getHitBySpell(const ASpell& s) const;

    virtual ATarget* clone() const = 0;

};