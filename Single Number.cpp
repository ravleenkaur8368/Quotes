class Solution {
public:
    static vector<int> singleNumber(vector<int>& nums) {
        int XOR=accumulate(nums.begin(), nums.end(), 0, bit_xor<>());
        int i=0;
        while (((XOR >> i) & 1) == 0)
            i++;
        int A=0, B=0;
        for(int x: nums){
            if (((x >> i) & 1) == 0)
                A^=x;
            else
                B^=x; 
        }
        return {A, B};
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
};
