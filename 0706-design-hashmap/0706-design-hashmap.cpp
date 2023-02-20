class MyHashMap {
    int array [1000001];
public:
    MyHashMap() {
        for(int i=0; i<1000001; i++)
            array[i] = -1;
    }
    
    void put(int key, int value) {
        array[key] = value;
    }
    
    int get(int key) {
        return array[key];
    }
    
    void remove(int key) {
        array[key] = -1;
    }
};