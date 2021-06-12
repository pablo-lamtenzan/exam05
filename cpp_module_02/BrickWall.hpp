# pragma once

# include "ATarget.hpp"

struct BrickWall : ATarget
{
    BrickWall() : ATarget("Inconspicuous Red-brick Wall") { }
    ~BrickWall() { }
    ATarget* clone() const { return new BrickWall(); }
};