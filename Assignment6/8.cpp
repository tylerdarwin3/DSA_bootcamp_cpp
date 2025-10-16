class MyCalendar {
private:
    map<int,int> calendar;
public:
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        auto next = calendar.upper_bound(startTime);

        if (next != calendar.end() && (*next).second < endTime){
            return false;
        }

        calendar.insert({endTime, startTime});

        return true;
    }
};
