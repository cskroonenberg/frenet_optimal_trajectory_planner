#ifndef FRENETOPTIMALTRAJECTORY_CAR_H
#define FRENETOPTIMALTRAJECTORY_CAR_H

#include "utils.h"

#include <vector>
#include <tuple>

using namespace std;

// AWS DeepRacer configuration
const double VEHICLE_LENGTH = 0.3;
const double VEHICLE_WIDTH = 0.2;

class Car {
public:
    Car() {
        length = VEHICLE_LENGTH;
        width = VEHICLE_WIDTH;
    };
    Car(Pose pose_): pose(pose_) {
        length = VEHICLE_LENGTH;
        width = VEHICLE_WIDTH;
    };
    void setPose(Pose p);
    vector<Point> getOutline();
private:
    double length;
    double width;
    Pose pose; // x, y, yaw
};

#endif //FRENETOPTIMALTRAJECTORY_CAR_H
