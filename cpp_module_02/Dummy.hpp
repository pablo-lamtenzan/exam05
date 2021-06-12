# pragma once

# include "ATarget.hpp"

struct Dummy : public ATarget
{
    Dummy() : ATarget("Target Practice Dummy") { }
    ~Dummy() { }
    ATarget* clone() const { return new Dummy(); }
};