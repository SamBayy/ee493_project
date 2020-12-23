#include "main.h"
#include "Localizer.h"

using namespace std;

Target::Target(string name, Point location) : name(name), location(location)
{
}

void Localizer::AddTarget(Target target)
{
	targets.push_back(target);
}

void Localizer::AddTarget(string name, Point location)
{
	Target target(name, location);
	targets.push_back(target);
}

void Localizer::UpdateTargetRssi(string name, double rssiValue)
{
	for (auto it = begin(targets); it != end(targets); ++it) {
		if (it->Name() == name) {
			it->SetRssi(rssiValue);
			break;
		}
	}
}

void Localizer::RemoveTarget(string name)
{
	for (auto it = begin(targets); it != end(targets); ++it) {
		if (it->Name() == name) {
			targets.erase(it);
			break;
		}
	}
}

void Localizer::UpdateLocation()
{
	/*
    x
    ^
    .
    .
    ESP3
    .
    .
    .
    ESP1 . . . ESP2. . .>y
    */
	double z1;
    	double z2;
    	double z3;
	
	for (auto it = begin(targets); it != end(targets); ++it) {
		z1 = RSSI_to_Meter(it->rssi);
	}
	
	z1 = z1*z1;
	z2 = z2*z2;
	z3 = z3*z3;
	
	location.x = (z1-z2+9)/6; //for 1 meter square area 6->2, 9->1
    	location.y = (z1-z3+9)/6; //for 1 meter square area 6->2, 9->1
}

Point Localizer::GetLocation()
{
	return location;
}
///////////////////////////////////////////////////// Fingerprint
double RSSI_to_Meter(double RSSI){
   double from_source;
    if(RSSI < 10){
        //linearization with the remaining values.
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 20){
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 30){
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 40){
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 50){
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 60){
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 70){
        from_source = 0;
        return from_source;
    }
    else if(RSSI < 80){
        from_source = 0;
        return from_source;
    }
    else{
        from_source = 0;
        return from_source;
    }
}
