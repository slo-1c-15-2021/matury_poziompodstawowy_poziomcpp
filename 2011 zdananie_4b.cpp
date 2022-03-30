#include <bits/stdc++.h>>
using namespace std;
bool czy_palindrom(string s)
{
    int p, k;
    p=0;
    k=s.size()-1;
    while(p<k){
        if(s[p] !=s[k]) return false;
        p++;
        k--;

    }
    return true;
}
int main(){
    string s;
        int licznik=0;
    ifstream f("hasla.txt");
    while(f>>s) {
       if(s.size()%2== 0) licznik++;
       while (f>>s) {
            if(czy_palindrom(s)) licznik ++;
            }
    }
    cout <<"odp. a =" << licznik << "\n";
}
