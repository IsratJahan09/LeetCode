// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int count = 0;
//         for(int i = s.length()-1; i>=0; i--){
//             if(count>=1 and s[i]==' '){
//                 break;
//             }
//             else if(s[i]!=' ')
//             count++;
//         }
//         return count;
//     }
// };

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int count = 0;
        while(s[n]==' ')
        n--;
        while(n>=0 and s[n]!=' '){
            n--;
            count++;
        }
        return count;
    }
};
