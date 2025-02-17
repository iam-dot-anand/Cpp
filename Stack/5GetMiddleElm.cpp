#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& st, int& pos, int& ans) {
    if (pos == 1) {
        ans = st.top();
        return;
    }
    pos--;
    int temp = st.top();
    st.pop();

    solve(st, pos, ans);
    st.push(temp);
}
int getMiddleElm(stack<int>& st) {
    int size = st.size();
    if (st.empty()) {
        return -1;
    } else {
        int pos = 0;
        if (size & 1) {
            // odd
            pos = size / 2 + 1;
        } else {
            // even
            pos = size / 2 + 1;
        }
        int ans = -1;
        solve(st, pos, ans);
        return ans;
    }
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    int middle = getMiddleElm(st);
    cout << "Middle Element: " << middle << endl;
    return 0;
}