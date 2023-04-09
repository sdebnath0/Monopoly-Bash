#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cstring>
#include "Player.h"
#include "Data.h"
using namespace std;
int getPosn(int x) {
	srand(time(0));
	return rand() % 40;
}
int getNoPlay() {
	return 6;
}
char charRep(int x) {
	if(x == 0) {
		return 'G'; } else if (x == 1) {return 'B';} else if (x == 2) {return 'D';} else if (x == 3) {return 'P';} 
	else if (x==4) {return 'S';} else {return '$';} 
}
void add_spaces(std::vector <std::string> coord_spaces) {
	for (int it = 0; it < coord_spaces.size(); ++it) {
		if (coord_spaces[it].length() < 8) {
			for (int i = 0; i < 8; i++) {
				string tmp;
				tmp = coord_spaces[it];
				tmp.append(" ");
				coord_spaces[it] = tmp;
			}
		}
	}
}
void join(int start, int end, std::vector <std::string> coord_join) {
	string joint = "";
	if (start > end) {
		for (int i = end; i <= start; i--) {
			joint.append(coord_join[i]);
		}
	}
	else {
		for (int i = start; i <= end; i++) {
			joint.append(coord_join[i]);
		}
	}
	cout << joint << "|" << endl;
}
//void semi_main(std::vector <std::string> properties,std::vector <std::string> tiles) {
//
//}
int main () {
	std::vector <std::string> properties = {"AL","ML","ECH","PAS","HH","RCH","DWE","CPH","LHI","BMH","OPT","EV1","EV2","EV3","PHYS","B1","B2","EIT","ESC","C2","MC","DC"};
	std::vector <std::string> tiles = {"COLLECT OSAP","AL","SLC","ML","TUTION","MKV","ECH","NEEDLES HALL","PAS","HH","DC TIMS LINE","RCH","PAC","DWE","CPH","UWP","LHI","SLC","BMH","OPT","GOOSE NESTING","EV1","NEEDLES HALL","EV2","EV3","V1","PHYS","B1","CIF","B2","GO TO TIMS","EIT","ESC","SLC","C2","REV","NEEDLES HALL","MC","COOP FEE","DC"};
	std::vector <std::string> coord(40, "|");
	std::vector <std::string> imp_coord(22, "|");
	int noPlay = getNoPlay();
	//std::vector <int> pos(noPlay-1);
	//std::vector <std::string> strRep(noPlay-1, "");
	std::vector <int> imp (properties.size());
	for(int i = 0; i < noPlay; i++) {
		string tmp;
		string tmp_char;
		int pos = getPosn(i);
		tmp_char = charRep(i);
		//pos.emplace_back(pos);
		//strRep.emplace_back(tmp_char);
		tmp = coord[pos];
		tmp.append(tmp_char);
		coord[i] = tmp;
	}
	for(int i = 0; i < properties.size(); i++) {
		string tmp;
		tmp = imp_coord[i];
		for (int i = 0; i < imp[i]; i++) {
			if(imp[i] == 4) {
				tmp.append("C");
			}
			else {
				tmp.append("^");
			}
		}
		imp_coord[i] = tmp;
	}

	//add_spaces(coord);
	//add_spaces(imp_coord);
	//cout << "_________________________________________________________________________________________" << endl;
	//cout << "|Goose  "<< imp_coord[11] << "NEEDLES" << imp_coord[12] << imp_coord[13] << "V1     " << imp_coord[14] << imp_coord[15] << "CIF    " << imp_coord[16] << "GO TO  |" << endl;
	//cout << "|Nesting|-------|HALL   |-------|-------|       |-------|-------|       |-------|TIMS   |" << endl;
	//cout << "|       |EV1    |       |EV2    |EV3    |       |PHYS   |B1     |       |B2     |       |" << endl;
	//join(20,30, coord);
	//cout << "|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|" << endl;
	//cout << imp_coord[10]<< "|" << "                                                                       " << imp_coord[17] << "|" << endl;
	//cout << "|-------|                                                                       |-------|" << endl;
	//cout << "|OPT    |                                                                       |EIT    |" << endl;
	//cout << coord[19]<< "|" << "                                                                       " << coord[31] << "|" << endl;
	//cout << "|_______|                                                                       |_______|" << endl;
	//cout << imp_coord[9]<< "|" << "                                                                       " << imp_coord[18] << "|" << endl;
	//cout << "|-------|                                                                       |-------|" << endl;
	//cout << "|BMH    |                                                                       |ESC    |" << endl;
	//cout << coord[18]<< "|" << "                                                                       " << coord[32] << "|" << endl;
	//cout << "|_______|                                                                       |_______|" << endl;
	//cout << "|SLC    |                                                                       |SLC    |" << endl;
	//cout << coord[17]<< "|" << "                                                                       " << coord[33] << "|" << endl;
	//cout << "|       |                                                                       |       |" << endl;
	//cout << "|       |                                                                       |       |" << endl;
	//cout << "|_______|                                                                       |_______|" << endl;
	//cout << imp_coord[8]<< "|" << "                                                                       " << imp_coord[19] << "|" << endl;
	//cout << "|-------|                                                                       |-------|" << endl;
	//cout << "|LHI    |                                                                       |C2     |" << endl;
	//cout << coord[16]<< "|" << "             _____________________________________________             " << coord[34] << "|" << endl;
	//cout << "|_______|            |                                             |            |_______|" << endl;
	//cout << "|UWP    |            | #   #   ##  #####  ###   ###   ###  # #   # |            |REV    |" << endl;
	//cout << coord[15]<< "|" << "            | #   #  #  #   #   #   #  #  # #   # # #   # |            " << coord[35] << "|" << endl;
	//cout << "|       |            | # # #  ####   #   #   #  ###  #   # #  # #  |            |       |" << endl;
	//cout << "|       |            | # # #  #  #   #   #   #  #    #   # #   #   |            |       |" << endl;
	//cout << "|_______|            | #####  #  #   #    ###   #     ###  ### #   |            |_______|" << endl;
	//cout << imp_coord[7]<< "|" << "            |_____________________________________________|            " << "|NEEDLES|" << endl
	//cout << "|-------|                                                                       |HALL   |" << endl;
	//cout << "|CPH    |                                                                       |       |" << endl;
	//cout << coord[14]<< "|" << "                                                                       " << coord[36] << "|" << endl;
	//cout << "|_______|                                                                       |_______|" << endl;
	//cout << imp_coord[6]<< "|" << "                                                                       " << imp_coord[20] << "|" << endl;
	//cout << "|-------|                                                                       |-------|" << endl;
	//cout << "|DWE    |                                                                       |MC     |" << endl;
	//cout << coord[13]<< "|" << "                                                                       " << coord[37] << "|" << endl;
	//cout << "|_______|                                                                       |_______|" << endl;
	//cout << "|PAC    |                                                                       |COOP   |" << endl;
	//cout << "|       |                                                                       |FEE    |" << endl;
	//cout << "|       |                                                                       |       |" << endl;
	//cout << coord[12]<< "|" << "                                                                       " << coord[38] << "|" << endl;
	//cout << "|_______|                                                                       |_______|" << endl;
	//cout << imp_coord[5]<< "|" << "                                                                       " << imp_coord[21] << "|" << endl;
	//cout << "|-------|                                                                       |-------|" << endl;
	//cout << "|RCH    |                                                                       |DC     |" << endl;
	//cout << coord[11]<< "|" << "                                                                       " << coord[39] << "|" << endl;
	//cout << "|_______|_______________________________________________________________________|_______|" << endl;
	//cout << "|DC TIMS"<< imp_coord[4] << imp_coord[3] << "NEEDLES" << imp_coord[2] << "MKV    |TUTION" << imp_coord[1] <<"|SLC    " << imp_coord[0] << "COLLECT|" << endl;
	//cout << "|Line   |-------|-------|HALL   |-------|       |       |-------|       |-------|OSAP   |" << endl;
	//cout << "|       |HH     |PAS    |       |ECH    |       |       |ML     |       |AL     |       |" << endl;
	//join(10,0);
	//cout << "|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|" << endl;
	//

	cout << "_________________________________________________________________________________________" << endl;
	cout << "|Goose  |       |NEEDLES|       |       |V1     |       |       |CIF    |       |GO TO  |" << endl;
	cout << "|Nesting|-------|HALL   |-------|-------|       |-------|-------|       |-------|TIMS   |" << endl;
	cout << "|       |EV1    |       |EV2    |EV3    |       |PHYS   |B1     |       |B2     |       |" << endl;
	cout << "|       |       |       |       |       |       |       |       |       |       |       |" << endl;
	cout << "|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|-------|                                                                       |-------|" << endl;
	cout << "|OPT    |                                                                       |EIT    |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|                                                                       |_______|" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|-------|                                                                       |-------|" << endl;
	cout << "|BMH    |                                                                       |ESC    |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|                                                                       |_______|" << endl;
	cout << "|SLC    |                                                                       |SLC    |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|                                                                       |_______|" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|-------|                                                                       |-------|" << endl;
	cout << "|LHI    |                                                                       |C2     |" << endl;
	cout << "|       |             _____________________________________________             |       |" << endl;
	cout << "|_______|            |                                             |            |_______|" << endl;
	cout << "|UWP    |            | #   #   ##  #####  ###   ###   ###  # #   # |            |REV    |" << endl;
	cout << "|       |            | #   #  #  #   #   #   #  #  # #   # # #   # |            |       |" << endl;
	cout << "|       |            | # # #  ####   #   #   #  ###  #   # #  # #  |            |       |" << endl;
	cout << "|       |            | # # #  #  #   #   #   #  #    #   # #   #   |            |       |" << endl;
	cout << "|_______|            | #####  #  #   #    ###   #     ###  ### #   |            |_______|" << endl;
	cout << "|       |            |_____________________________________________|            |NEEDLES|" << endl;
	cout << "|-------|                                                                       |HALL   |" << endl;
	cout << "|CPH    |                                                                       |       |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|                                                                       |_______|" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|-------|                                                                       |-------|" << endl;
	cout << "|DWE    |                                                                       |MC     |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|                                                                       |_______|" << endl;
	cout << "|PAC    |                                                                       |COOP   |" << endl;
	cout << "|       |                                                                       |FEE    |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|                                                                       |_______|" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|-------|                                                                       |-------|" << endl;
	cout << "|RCH    |                                                                       |DC     |" << endl;
	cout << "|       |                                                                       |       |" << endl;
	cout << "|_______|_______________________________________________________________________|_______|" << endl;
	cout << "|DC Tims|       |       |NEEDLES|       |MKV    |TUTION |       |SLC    |       |COLLECT|" << endl;
	cout << "|Line   |-------|-------|HALL   |-------|       |       |-------|       |-------|OSAP   |" << endl;
	cout << "|       |HH     |PAS    |       |ECH    |       |       |ML     |       |AL     |       |" << endl;
	cout << "|       |       |       |       |       |       |       |       |       |       |       |" << endl;
	cout << "|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|_______|" << endl;


}

