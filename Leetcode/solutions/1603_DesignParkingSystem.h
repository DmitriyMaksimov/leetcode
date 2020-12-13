/// 1603. Design Parking System: https://leetcode.com/problems/design-parking-system/

class ParkingSystem
{
	enum CarTypes { bigCar, mediumCar, smallCar };
	int spacesLeft[3];

public:
    ParkingSystem(int big, int medium, int small)
    {
        spacesLeft[bigCar] = big;
        spacesLeft[mediumCar] = medium;
        spacesLeft[smallCar] = small;
    }

    bool addCar(int carType)
    {
    	return  (spacesLeft[carType - 1]-- > 0);
    }
};
