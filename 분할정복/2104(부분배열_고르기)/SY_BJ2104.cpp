//
//  main.cpp
//  BJ2104
//
//  Created by 소율 on 27/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include<cstdio>
#include<set>
#include<algorithm>

using namespace std;
const int MAX = 100001;
int n;
long long s[MAX], res;
pair<int, int> p[MAX];
set<int> st;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &p[i].first), p[i].second = i, s[i] = s[i - 1] + p[i].first;
    sort(p + 1, p + 1 + n);
    st.insert(0);
    st.insert(n + 1);
    for (int i = 1; i <= n; i++) {
        auto t = st.upper_bound(p[i].second);
        res = max(res, (s[*t - 1] - s[*--t]) * p[i].first);
        st.insert(p[i].second);
    }
    printf("%lld", res);
}
