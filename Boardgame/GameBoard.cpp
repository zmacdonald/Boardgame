//GameBoard
#include "GameBoard.h"
#include "Tile.h"
#include "Player.h"

GameBoard::GameBoard(){
  
}

void GameBoard::add(const Tile& tile, int row, int col){
  
}

const GameBoard::Tile& getTile(int row, int col) const{
  
}

void GameBoard::getCoordinate(const Tile &tile, int *row, int *col) const{
  
}

void GameBoard::setPlayer(Player player){
  
}

Player GameBoard::getPlayer(const std::string& playerName){
  
}

const Tile& GameBoard::getTile(const std::string& playerName) const{
  
}

std::vector<Player> GameBoard::getPlayers(const Tile& tile) const{
  
}

const Tile& GameBoard::move(MOVE move, const std::string& playerName){
  
}
