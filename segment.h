#ifndef SEGMENT_H
#define SEGMENT_H

#include <iostream>
#include <string>

class Segment{
private:
	Entrance gate;
	int numberOfCars;
	Car* cars_in_seg[500];
	int capacity;
	Segment* nextSegPtr;
	Segment* PrevSegPtr;
	int segId;
public:
	Segment(int k, int id);
	~Segment();
	void enter(int); //enters the cars FROM OUTSIDE
	void exit_seg();
	void receive(Car*); //the segment places a car in itself
	void pass();
	int getNoOfVehicles(){return numberOfCars;};
	int operate(int);
	void Insert_seg_behind(Segment*); //inserts a segment behind the seg its called with
	void set_cars_ready(int); //sets a percentage of cars to ready
};

#endif
