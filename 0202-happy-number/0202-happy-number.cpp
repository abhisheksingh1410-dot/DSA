class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while (n != 1) {
            if (s.count(n)) {
                return false;
            }
            s.insert(n);
            int ans=0;
            while (n) {
                ans = ans + (n % 10) * (n % 10);
                n = n / 10;
            }
        
                n = ans;
        }        
    
    
    return true;
}
};