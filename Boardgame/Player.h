
class Player{
private:
	int gold;
	int ruby;
	int Spice;
	int fabric;
	int jewel;
	int cart;
	int food;
public:
	bool canAct();
	bool pay(Player& player);
	void eat();
};