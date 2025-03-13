class RecentCounter {
public:
    queue<int>req;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        req.push(t);
        while(!req.empty() && req.front() < t-3000){
            req.pop();
        }
        return req.size();
    }
};

