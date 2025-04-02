class BrowserHistory {
public:
     vector<string> history;
     int index=-1;
    BrowserHistory(string homepage) {
         history.push_back(homepage);
         index++;
      
       
        
    }
    
    void visit(string url) {
        history.resize(index + 1);
        history.push_back(url);
        index++;
        
    }
    
    string back(int steps) {
        index = max(0, index - steps);
        return history[index];
        
    }
    
    string forward(int steps) {
        index = min((int)history.size() - 1, index + steps);
        return history[index];
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */