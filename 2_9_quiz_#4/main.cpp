#include <iostream>
#include "constants.h"


//double ballDrop()
//{
//    double distance_fallen;
//    int x_seconds = {0};
//    //std::cout << x_seconds;
//    distance_fallen = gravity * x_seconds * x_seconds / 2;
//    return distance_fallen;
//
//
//}



double distance_fallen(double x, double y)
{
     double distance_fallen;
     distance_fallen = x * y * y / 2;
     return distance_fallen;
}

int main()
{
    //heightOfTower();
    std::cout << "please enter the height of the tower in meters: " ;
    double z;
    std::cin >> z;

    std::cout << "At 0 seconds, the ball is at height " << z - distance_fallen(gravity, 0) << std::endl;
//
    std::cout << "At 1 seconds, the ball is at height " << z - distance_fallen(gravity, 1) << std::endl;
//
    std::cout << "At 2 seconds, the ball is at height " << z - distance_fallen(gravity, 2) << std::endl;
//
    std::cout << "At 3 seconds, the ball is at height " << z - distance_fallen(gravity, 3) << std::endl;
//
    std::cout << "At 4 seconds, the ball is at height " << z - distance_fallen(gravity, 4) << std::endl;
//
    std::cout << "At 5 seconds, the ball is at the ground " << std::endl;

        //std::cout << "At 5 seconds, the ball is at the ground " << z - distance_fallen(gravity, 5) << std::endl;
    return 0;
}
