

class Solution {

  public:
  bool is_vowel(char c){
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || 
       c=='a' || c=='e' || c=='i' || c=='o' || c=='u') 
        return true;
    else 
        return false;
}
 string Sandwiched_Vowel(string &s) {
      string t="";
      int n = s.length();
       for(int i = 0; i < n; i++){
          if(is_vowel(s[i]) && i > 0 && i < n-1){
              if(!is_vowel(s[i-1]) && !is_vowel(s[i+1])){
                  continue; // remove sandwiched vowel
              }
          }
          t.push_back(s[i]);
      }
      return t;
  }
};