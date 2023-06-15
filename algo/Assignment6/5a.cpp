// #include <bits/stdc++.h>

// using namespace std;
// typedef pair<int, char> pi;

// void print(priority_queue<pi, vector<pi>, greater<pi>> p)
// {
//     while (!p.empty())
//     {
//         cout << p.top().first << " " << p.top().second << endl;
//         p.pop();
//     }
//     cout << endl;
// }

// void printv(vector<pi> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     cout << endl;
// }

// int main()
// {
//     priority_queue<pi, vector<pi>, greater<pi>> p;
//     int n;
//     cout << "enter the total number of unique letter" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         // cout << "enter " << (i+1) << "th letter-length and that letter -> ";
//         int x;
//         char y;
//         cin >> x >> y;
//         p.push({x, y});
//     }
//     cout << endl;
//     vector<pi> v;
//     while (!p.empty() && p.size() != 1)
//     {
//         // cout<<endl<<p.size()<<endl;
//         pi p1, p2, p3;
//         p1 = p.top();
//         p.pop();
//         p2 = p.top();
//         p.pop();

//         if (p1.second == '$')
//         {
//             v.push_back({0, p2.second});
//             v.push_back({1, p1.second});
//         }
//         else
//         {
//             v.push_back({0, p1.second});
//             v.push_back({1, p2.second});
//         }

//         p.push({(p1.first + p2.first), '$'});
//         print(p);
//         printv(v);
//     }

//     return 0;
// }

// //
// /*
// 6
// 50 a
// 30 y
// 20 c
// 30 x
// 10 b
// 40 z
// */