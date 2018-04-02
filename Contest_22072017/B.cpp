#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int n;
    string str, c;
    char end;
    cin>>n;
    vector<string> v, tmp, ans;
    map<string,int> m;
    getline(cin, str);
    int a[51];
    for (int i = 0; i < n; i++) {
        tmp.clear();
        getline(cin, str);
        istringstream iss(str);
        while (iss >> c)
            tmp.push_back(c);
        int sz = tmp.size();
        string crr = "";
        for (int i = 0; i < sz; i++) {
            if (i < sz-1)
                crr += tmp[i][0];
            else
                crr = tmp[i] + crr;
        }
        for(int i = 0; i < crr.size(); i++)
			crr[i] = tolower(crr[i]);
        m[crr]++;
        if (m[crr] > 1)
            cout<<crr<<m[crr]<<"@ptit.edu.vn"<<endl;
        else
            cout<<crr<<"@ptit.edu.vn"<<endl;
    }
}

