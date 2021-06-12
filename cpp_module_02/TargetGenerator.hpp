# pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    TargetGenerator(const TargetGenerator&);
    TargetGenerator& operator=(const TargetGenerator&);
    typedef std::map<std::string, ATarget*> map;

    map targets;

    public:

    TargetGenerator() { }
    ~TargetGenerator()
    {
        for (map::iterator it = targets.begin() ;
        it != targets.end() ; it++)
            delete it->second;
    }

    void learnTargetType(ATarget* t)
    {
        const map::iterator& it = targets.find(t->getType());
        if (it == targets.end())
            targets[t->getType()] = t->clone();
    }

    void forgetTargetType(std::string& s)
    {
        const map::iterator& it = targets.find(s);
        if (it != targets.end())
        {
            delete it->second;
            targets.erase(it);
        }
    }

    ATarget* createTarget(const std::string& s)
    {
        const map::iterator& it = targets.find(s);
        return it != targets.end() ? it->second : NULL;
    }
};