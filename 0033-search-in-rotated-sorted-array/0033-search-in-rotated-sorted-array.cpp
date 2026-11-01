class Solution {
public:
    int search(vector<int>& A, int tar) {
        int n = A.size();
        int st = 0, end = n-1;

        while(st <= end){
            int mid = st+(end-st)/2;
            if(tar == A[mid]) return mid;
            if(A[st] <= A[mid]){
                if(tar >= A[st] && tar <= A[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{
                if(tar >= A[mid] && tar <= A[end]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        return -1;
        
    }
};