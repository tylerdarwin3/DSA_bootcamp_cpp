class MyCalendarTwo {
private:
    vector<pair<int, int>> calendar_;
    vector<pair<int, int>> overlaps_;
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        for (const auto & p: overlaps_){
            if (startTime < p.second && endTime > p.first){
                return false;
            }
        }
        for (const auto & p: calendar_){
            if (startTime < p.second && endTime > p.first){
                int overlapStart = max(startTime, p.first);
                int overlapEnd = min(endTime, p.second);
                overlaps_.emplace_back(overlapStart, overlapEnd);
            }
        }
        calendar_.emplace_back(startTime, endTime);

        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */