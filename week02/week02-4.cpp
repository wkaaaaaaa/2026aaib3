//week02-4.cpp學習計畫Basic第2題
//LeetCode 389.Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26]={};//有26個回收桶(對應26個字母),裡面先放0
        for(char c:s){//把C++進階 for 迴圈寫法
          U[c-'a']++;//把字母放進對應的回收桶裡
        }
         for(char c:t){//把C++進階 for 迴圈寫法
          U[c-'a']--;//把字母放進對應的回收桶裡
        if(U[c-'a']<0)return c;//如果字母不夠用,找到兇手
    }
    return 0;
    }
};
