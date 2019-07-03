#include <iostream>

using namespace std;
struct Game {
	int[] players;
	int[] activePlayers;
	int width;
	int height;
}

class Player {
	
	
	private: 
	
	int healthBar;
	
	boolean alive;
	
	boolean isAttacking;
	
	int playerId;
	
	int x;
	
	int y;
	
	Game GameObj;
	
	public:
	
	int getHealthBar() {
		return healthBar;
	}
	
	boolean isAlive() {
		return alive;
	}
	
	
	boolean isAttacking() {
		return attacking;
	}
	
	int id() {
		return playerId;
	}
	
	Player(int idN) {
		healthBar = 100;
		alive = true;
		playerId = idN;
	}
	
	void kill {
		alive = false;	
	}
	
	void takeDamage(int damageNumber) {
		healthBar -= damageNumber;	
	}
	
	void heal(int healAmt) {
		healthBar += healAmt;
	}
	
	void hit(Player player) {
		player.takeDamage(5);
	}
	
	void update() {
		if(healthbar <= 0) {
			alive = false;
		}
		Game.remove(0);
	}
};

class Arrow {
	
	public:
	
	int xBearing;
	int yBearing;
	
	int x;
	int y;
	int width;
	int height;
	
	void update() {
		x += xBearing;
		y += yBearing;
	}
}

class Coin {
	public:
	
	int worth 
	
}