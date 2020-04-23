using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& c) {
    int odd = 0;
    int even = 0;
    
    for(size_t i = 0; i < c.size(); i++)
    {
        if(c[i] % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    
    return min(odd, even);
}
};