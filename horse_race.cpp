#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	int horses[] = {0,0,0,0,0};

	srand(time(NULL));

	bool keepGoing = true;
	while (keepGoing){
		for (int hn = 0; hn < NUM_HORSES; hn++){
			advance(hn, horses);
			printLane(hn, horses);
			if (isWinner(hn, horses)){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "<ENTER> for another turn.";
		std::cin.ignore();
	} // end while
} // end main

void advance(int hn, int* horses){
	int coin = rand() % 2;
	horses[hn] += coin;
} // end advance

void printLane(int hn, int* horses){
	for (int position = 0; position < TRACK_LENGTH; position++){
		if (position == horses[hn]){
			std::cout << hn;
		} else {
			std::cout << ".";
		} // end if
	} // end for
        std::cout << std::endl;
} // end printLane

bool isWinner(int hn, int* horses){
	bool result = false;
	if NUM_HORSE > TRACK_LENGTH{
		cout << "This " << horses[hn] << " wins!";
		bool result = true;
		return result;
	}
}



/* isWinner algo:
 *
  set result to fals
  if the current horse's value is larger than traqck length
    print this horse wins
    set result to tru
  return resul
 */

