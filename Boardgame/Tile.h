#include "Player.h"
#include <iostream>

class Tile{
public:
	bool operator==(const Tile &t); 
	virtual bool action( Player& player ); 
	virtual Tile* clone(); 
	std::ostream& operator<<
};