#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout << "Enter a number";
    int num = 0;
    cin >> num;
    string s = to_string(num);
    vector<int> store;
    for(int x = 0; x < s.length(); x++){
        int count = 0;

        auto check = find(store.begin(), store.end(), s[x]);
        if (check != store.end()){
            continue;
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] == s[x]){
                count++;
            }
        }
        store.push_back(s[x]);
        cout << s[x] << " occured " << count << " many times" << endl;
    }
    return 0;
}




