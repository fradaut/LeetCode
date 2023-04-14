class ParkingSystem {
public:
    short slots[4]={0};
    ParkingSystem(int big, int medium, int small) {
        slots[1]+=big;
        slots[2]+=medium;
        slots[3]+=small;
    }
    
    bool addCar(int carType) {
        if (slots[carType]==0){return false;}
        else {
            slots[carType]--;
            return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */