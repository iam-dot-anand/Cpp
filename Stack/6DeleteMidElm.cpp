#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int &pos)
{
    if (pos == 1)
    {
        st.pop();
        return;
    }
    else
    {
        pos--;
        int temp = st.top();
        st.pop();
        solve(st, pos);
        st.push(temp);
    }
}

void getMiddleElm(stack<int> &st)
{
    int size = st.size();
    if (st.empty())
    {
        return;
    }
    else
    {
        int pos = 0;
        if (size & 1)
        {
            pos = size / 2 + 1;
        }
        else
        {
            pos = size / 2;
        }
        solve(st, pos);
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // cout << "Before Delete MiddleElm ";
    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

    getMiddleElm(st);

    cout<< "After Delete MiddleElm ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    
    return 0;
}