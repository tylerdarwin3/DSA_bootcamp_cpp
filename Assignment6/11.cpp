class ExamRoom {
private:
    int n;
    // Custom comparator: prioritize max distance, then smallest seat index
    struct Compare {
        int n;
        Compare(int n) : n(n) {}
        bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
            auto dist = [this](const pair<int,int>& p) {
                int l = p.first, r = p.second;
                if (l == -1 || r == n) return r - l - 1;
                return (r - l) / 2;
            };
            int da = dist(a), db = dist(b);
            return da == db ? a.first < b.first : da > db;
        }
    };
    set<pair<int,int>, Compare> intervals{Compare(n)};
    unordered_map<int, int> left, right; // Track neighbors for merging

    void addInterval(pair<int,int> p) {
        intervals.insert(p);
    }
    void removeInterval(pair<int,int> p) {
        intervals.erase(p);
    }

public:
    ExamRoom(int n) : n(n) {
        addInterval({-1, n});
    }

    int seat() {
        auto it = intervals.begin();
        int l = it->first, r = it->second;
        int seat = l == -1 ? 0 : (r == n ? n-1 : (l+r)/2);

        removeInterval({l, r});
        addInterval({l, seat});
        addInterval({seat, r});

        left[seat] = l;
        right[seat] = r;
        left[r] = seat;
        right[l] = seat;

        return seat;
    }

    void leave(int p) {
        int l = left[p], r = right[p];
        removeInterval({l, p});
        removeInterval({p, r});
        addInterval({l, r});

        left[r] = l;
        right[l] = r;
        left.erase(p);
        right.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */