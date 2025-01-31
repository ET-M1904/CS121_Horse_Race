#include <iostream>
#include <cstdlib>
#include <time>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	int horses[5] = {0,1,2,3,4};
	for (
