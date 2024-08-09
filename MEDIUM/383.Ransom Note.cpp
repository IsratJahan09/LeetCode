class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     int notelen = ransomNote.size(), maglen = magazine.size();
     sort(ransomNote.begin(), ransomNote.end());
     sort(magazine.begin(), magazine.end());
   int k = 0, flage = 0;
       for(int i =0; i<maglen; i++){
         if (ransomNote[k] == magazine[i]) {
           k++; flage++;
         } 
       }
       return (flage == notelen)?1:0;
    }
};
