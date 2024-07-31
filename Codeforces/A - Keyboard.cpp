#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

char correct(char ch, string s, int sign){
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ch)
            return s[i + sign];
    }
    return '#';
}
int main(){
    char shift;
    cin >> shift;
    string seq1 = "qwertyuiop";
    string seq2 = "asdfghjkl;";
    string seq3 = "zxcvbnm,./";

    string s;
    cin >> s;
    int sign = (shift == 'R') ? -1 : 1;
    for(int i = 0; i < s.size(); ++i){
        char ch = correct(s[i], seq1, sign);
        if(ch == '#')
            ch = correct(s[i], seq2, sign);
        if(ch == '#')
            ch = correct(s[i], seq3, sign);

        cout << ch;
    }
    return 0;
}