class StockSpanner {
private:
    stack<pair<int, int>> stk;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while (!stk.empty() && stk.top().first <= price){
            span += stk.top().second;
            stk.pop();
        }
        stk.emplace(price,span);
        return span;
    }
};