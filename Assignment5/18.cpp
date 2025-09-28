class LFUCache {
private:
    int cache_capacity;
    int minFreq;
    struct Node {
        int key, value, freq;
        list<int>::iterator listIt;
    };
    unordered_map<int, Node> keyToNode;
    unordered_map<int, list<int>> freqToList;

    void touch(Node& node){
        int oldFreq = node.freq;
        freqToList[oldFreq].erase(node.listIt);

        if (freqToList[oldFreq].empty()){
            if(minFreq == oldFreq){
                minFreq++;
            }
            freqToList.erase(oldFreq);
        }
        node.freq++;
        freqToList[node.freq].push_front(node.key);
        node.listIt = freqToList[node.freq].begin();
    }
public:
    LFUCache(int capacity) {
        cache_capacity = capacity;
        minFreq = 0;
    }

    int get(int key) {
        auto it = keyToNode.find(key);
        if (it == keyToNode.end()){
            return -1;
        }

        Node& node = it->second;
        touch(node); // update frequency and move to correct list
        return node.value;
    }

    void put(int key, int value) {
        if (cache_capacity == 0){
            return;
        }

        auto it = keyToNode.find(key);
        if (it != keyToNode.end()){
            // Key exists, update value and touch
            Node& node = it->second;
            node.value = value;
            touch(node);
            return;
        }

        if (keyToNode.size() == cache_capacity){
            // Evict least frequently used item
            int keyToEvict = freqToList[minFreq].back();
            freqToList[minFreq].pop_back();
            keyToNode.erase(keyToEvict);
        }

        // Insert new key
        minFreq = 1;
        freqToList[1].push_front(key);
        keyToNode[key] = {key, value, 1, freqToList[1].begin()};
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */