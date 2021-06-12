
# include "Dummy.hpp"
# include "Fwoosh.hpp"
# include "Warlock.hpp"
# include "Polymorph.hpp"
# include "BrickWall.hpp"
# include "TargetGenerator.hpp"
# include "Polymorph.hpp"
# include "Fireball.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  // TO DO: What if the target name is not valid ?
  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();

  if (wall)
  {
    richard.launchSpell("Polymorph", *wall);
    richard.launchSpell("Fireball", *wall);
  }

  // NOTE: Add myself this
  delete polymorph;
  delete fireball;
}
