class LRUCache {
private:
    int cache_capacity;
    list<pair<int,int>> lruList; // doubly linked list to track usage order
    unordered_map<int, list<pair<int,int>>::iterator> cacheMap; // key to iterator mapping 
public:
    LRUCache(int capacity) {
        cache_capacity = capacity;
    }
    
    int get(int key) {
        auto it = cacheMap.find(key);
        if (it == cacheMap.end()){
            return -1;
        }
        // Move the accessed item to the front (most recently used)
        lruList.splice(lruList.begin(), lruList, it->second);
        return it->second->second; // return the value
    }
    
    void put(int key, int value) {
        auto it = cacheMap.find(key);
        if (it != cacheMap.end()){
            // Update existing key and move to the front
            it->second->second = value;
            lruList.splice(lruList.begin(), lruList, it->second);
        } else {
            // If cache is full, evict the least recently used item
            if (cacheMap.size() >= cache_capacity) {
                int lruKey = lruList.back().first;
                lruList.pop_back();
                cacheMap.erase(lruKey);
            }
            // Insert new key-value pair at the front
            lruList.push_front({key, value});
            cacheMap[key] = lruList.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */