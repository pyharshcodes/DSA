class Solution {
public:
    int peakIndexInMountainArray(vector<int>& n) {
        int st=1, end=n.size()-2;
        while(st<=end){
            int mid=st+(end-st)/2;
            if (n[mid-1]<n[mid]&&n[mid]>n[mid+1]){
                return mid;
            }else if (n[mid-1]<n[mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};