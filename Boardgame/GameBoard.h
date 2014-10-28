#include "Tile.h"
#include "Player.h"

#include <string>
#include <vector>

enum class MOVE{North,East,South,West}; //not sure where we should put this...

class GameBoard{
public:
	void add(const Tile& tile, int row, int col);
	const Tile& getTile(int row, int col) const;
	void getCoordinate(const Tile &tile, int *row, int *col) const;
	void setPlayer(Player player);
	Player getPlayer(const std::string& playerName);
	const Tile& getTile(const std::string& playerName) const;
	std::vector<Player> getPlayers(const Tile& tile) const;
	const Tile& move(MOVE move, const std::string& playerName);
};