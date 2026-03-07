// you are given an array of positive and negative numbers
// the absolute value of the element of array is the size of the array
// the +ve value in array means that the asteroid is going right
// the negative means left
// when 2 asteroids collide, the smaller one gets destroyed
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++){
            int curr = asteroids[i];

            if(curr > 0){
                st.push(curr);
            }
            else{
                while(!st.empty() && st.top() > 0 && st.top() < abs(curr)){
                    st.pop();
                }

                if(!st.empty() && st.top() == abs(curr)){
                    st.pop();
                }
                else if(st.empty() || st.top() < 0){
                    st.push(curr);
                }
            }
        }

        vector<int> ans(st.size());

        for(int i = st.size()-1; i >= 0; i--){
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
