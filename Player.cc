#include "Player.h"

//constructor
Player::Player(std::string name, char piece): name{name}, piece{piece},
        posn{0}, balance{1500}, timsCups{0} { };


//other methods
void Player::nextposn() {
	if(posn < 40) {
		++posn;
        } else {
                posn = 0;
        };
};

std::string Player::get_properties() {
};
