# pragma once

# include "ATarget.hpp"

struct Dummy : public ATarget
{
    Dummy() : ATarget("Target Practice Dummy") { }
    ~Dummy() { }
    ATarget* clone() { return new Dummy(); }
};