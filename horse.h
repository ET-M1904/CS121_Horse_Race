#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class horse {
	private:
		int position;
		int track_length;
		int id;
	public:
		horse();
		init(int id, int tracklength);
		void advance;
		void print_lane;
		bool is_Winner;
};
