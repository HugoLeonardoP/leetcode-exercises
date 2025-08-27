class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double x,y,d,a,dm = 0,am = 0;
        for(int i = 0; i<dimensions.size(); i++){
            x = dimensions[i][0];
            y = dimensions[i][1];
            
            d = sqrt(x*x + y*y);
            a = x*y;
            if(d >= dm){
                if(d == dm && a > am) am = a;
                else{
                    if(d > dm) am = a;
                }
                dm = d;
            }
        }
        return am;
    }
};