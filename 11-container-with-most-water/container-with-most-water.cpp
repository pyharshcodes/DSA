class Solution {
public:
    int maxArea(vector<int>& height) {
        int lh=0, rh=height.size()-1;
        int maxwater=0;
        while(lh<rh){
            int w=rh-lh;
            int ht=min(height[lh], height[rh]);
            int container=w*ht;
            maxwater=max(maxwater, container);
            height[lh]<height[rh] ? lh++ : rh--;
        }
        return maxwater;
    }
};