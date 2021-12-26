class ParkingSystem {
public:
    vector<int> V;
    ParkingSystem(int big, int medium, int small)
    {
        V.push_back(big), V.push_back(medium), V.push_back(small);
    }
    bool addCar(int carType)
    {
        if(V[carType-1]>0)
        {
            V[carType-1]--;
            return true;
        }
        return false;
    }
};