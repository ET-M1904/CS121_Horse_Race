#include <iostream>
#include "horse.h"
#include <random>

std::random_device rnd;
std::uniform_int_distribution<int> dist(0,1);

horse::horse(){
	horse::position = 0;
	horse::Index = 0;
	horse::track_length = 15;
};

void horse::init(int index, int track_length){
	horse::position = 0;
	horse::index = index;
	horse::track_length = track_length;
}

void horse::advance(){
	int coin = dist(rd);
	horse::position += coin;
}

void horse::print_lane(){
	for (int pos = 0; pos < horse::track_length; pos++){
