#ifndef Dwarf_h
#define Dwarf_h
#include "Enemy.h"

class Dwarf: public Enemy {
public:
  Dwarf(Tile* tile);
  ~Dwarf();
  
  void attackWho(Goblin* g, double multi = 1) override;
  void attackWho(Troll* t, double multi = 1) override;
  void attackWho(Shade* s, double multi = 1) override;
  void attackWho(Vampire* v,double multi = 1) override;
  void attackWho(Drow* d,double multi = 1) override;
  
  void attackBy(Player* player) override;
};

#endif 
