#include "Player.hpp"

int Player::lastCreatedPlayerId = -1;

Player::Player() : Player("", "") {
	this->username = to_string(this->id);
}

Player::Player(string username, string password) : username(username), password(password) {
	Player::lastCreatedPlayerId += 1;

	this->id = Player::lastCreatedPlayerId;
}

Player::~Player() {
	cout << *this << " был уничтожен" << endl;
}

ostream& operator<<(ostream& out, Player& player) {
	out << "Игрок[ID=" << player.id << "] \"" << player.username << "\" с паролем \"" << player.password << "\"";

	return out;
}