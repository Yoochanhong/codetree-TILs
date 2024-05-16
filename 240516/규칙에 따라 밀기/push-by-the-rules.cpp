#include <iostream>
#include <deque>

using namespace std;
int main() {
    deque<char> q;
    string a;
    cin >> a;
    for (auto i : a) q.emplace_back(i);
    cin >> a;
    for (auto i : a){
        if (i == 'L') {
            q.emplace_back(q.front());
            q.pop_front();
        } else {
            q.emplace_front(q.back());
            q.pop_back();
        }
    }
    while(!q.empty()){
        cout << q.front();
        q.pop_front();
    }   
    return 0;
}