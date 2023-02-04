class RandomizedSet {
    set<int> mp;
    public:
    RandomizedSet() {}
    bool insert(int val) {
        if(mp.find(val)==mp.end())
        {
            mp.insert(val);
            return 1;
        }
        return 0;
    }
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end())
        {
            mp.erase(val);
            return 1;
        }
        return 0;    
    }
    
    int getRandom() {
        int ran = rand()%mp.size();
        auto it = mp.begin();
        return *next(mp.begin(), ran);
    }
};