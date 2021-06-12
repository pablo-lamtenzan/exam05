#!/usr/bin/sh
# /bin/sh for 42's MACs

touch {Warlock,ASpell,ATarget,Fwoosh,Dummy,Fireball,Polymorph,BrickWall,SpellBook,TargetGenerator}{.cpp,.hpp}

for i in * ; do
    if [ ${i##*.} = "cpp" ] ; then
        echo "# include \"${i%.cpp}.hpp\"" >> ${i}
    else
        echo -e "# pragma once\n\n\nclass ${i%.hpp}\n{\n\n};\n\n" >> ${i}
    fi
done
exit 42 # This script writes over itself #
