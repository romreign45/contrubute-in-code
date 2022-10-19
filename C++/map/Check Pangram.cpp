/*                           Check if the Sentence Is Pangram               */

/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Input: sentence = "leetcode"
Output: false
*/


#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
    int n=sentence.size();
    map<char,bool> mp;

    for(int i=0;i<26;i++){
        mp['a'+i]=false;
    }

    for(int i=0;i<n;i++){
        mp[sentence[i]]=true;
    }

    for(auto x:mp){
        if(x.second==false)
            return false;
    }

    return true;
}

int main(){
  string s;
  cin>>s;
  cout<<checkIfPangram(s);
  return 0;
}


