#ifndef _PLAYER_H
#define _PLAYER_H
#include <vector>
#include <map>
#include <string>

class Player {
	std::string name; 		//name of player
	char piece;        		// Piece representing player on board (G, B, D, P, S, $, L, T)
	int posn;			// current posn of player
	int balance;			// money owned by player
	int timsCups;			// no. of tims cups player owns
	//std::map<std::string, int> owned_properties;   // subject to change
	std::vector<int> owned;
	bool inJail;
//	std::vector<Property*> owned;
	
public:
	// constructor
	Player(std::string name, char piece);      // player name, piece are entered during player construction
					// at start, posn = 0, balance = 1500, timsCups = 0;
	
	// accessors
	std::string get_name() const;
	char get_piece() const;
	int get_posn() const;
	int get_balance() const;
	int get_timsCups() const;
	void get_properties() const;

	// mutators
	void JumpTo_posn(int a);
	void MovePosn_By(int a);
	void pay(int a);
	void buy(int a);
	
	//methods
	void nextposn();                // moves player to next position this is a method 
					// and not a mutator, as after posn = 40, it resets to 0
					//
	//needs tile info, so moved higher, into data for now
//	int calc_NetWorth();		// Looks at balance and property values(including immprovements)
					// and calculates the net worth of the player
	std::string get_properties();   // shows properties player owns
					// might later move this property to class owning player
					// as this is the only field causing need of Big5
	
};

#endif
