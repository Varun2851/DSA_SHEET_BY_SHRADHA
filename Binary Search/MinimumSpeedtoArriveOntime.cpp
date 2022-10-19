
class Solution {
    bool is_poss(int speed , vector<int> &dis , double hour){
        int time = 0;
        double left = 0;
        
        for(int i = 0; i < dis.size(); i++){
            time += dis[i]/speed;
            
            if(i != dis.size() - 1)
            time += (dis[i] % speed > 0 ? 1 : 0);
            else{
                left = double(dis[dis.size() - 1] % speed)/speed; 
            }
        }
        
        double total_time = left + time;
        
        return total_time <= hour;
    }
    
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left = 1 , right = 10000000;
        int ans = -1;
        
        while(left <= right){
            int mid = left + (right - left)/2;
            
            if(is_poss(mid , dist , hour)){
                ans = mid;
                right = mid - 1;
            }else
                left = mid + 1;
        }
        
        ans = max(ans , -1);
        
        return ans;
    }
};