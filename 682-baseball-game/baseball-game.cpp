class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string>st;
        int sum = 0;
        for(int i = 0; i<operations.size();i++){
            if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "+"){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.push(a);
                int x = stoi(a) + stoi(b); // to convert string to integer
                st.push(to_string(x)); // to convert integer to string
            }
            else if(operations[i] == "D"){
                string a = st.top();
                int x = 2*stoi(a);
                st.push(to_string(x));
            }
            else{
                st.push(operations[i]);
            }
        }
        while(!st.empty()){
            sum = sum + stoi(st.top());
            st.pop();
        }
        return sum;
    }
};