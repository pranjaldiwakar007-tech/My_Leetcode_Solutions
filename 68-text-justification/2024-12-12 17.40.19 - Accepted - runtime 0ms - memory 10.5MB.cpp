class Solution {
public:
int MAX_WIDTH;
 vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n     = words.size();
        MAX_WIDTH = maxWidth;
        int i     = 0;
        
        while(i < n) {
            int lettersCount = words[i].length();
            int j            = i+1;
            int spaceSlots   = 0;
            
            while(j < n && spaceSlots + lettersCount + words[j].length() + 1 <= maxWidth) {
                lettersCount += words[j].length();
                spaceSlots   += 1;
                j++;
            }
            
            int remainingSlots = maxWidth - lettersCount;
            
            
            int eachWordSpace = spaceSlots == 0 ? 0 : remainingSlots / spaceSlots;
            int extraSpace    = spaceSlots == 0 ? 0 : remainingSlots % spaceSlots;
            
            if(j == n) { //Means we are on last line - Left justfied
                eachWordSpace = 1;
                extraSpace    = 0;
            }
            
            
            result.push_back(findLine(i, j, eachWordSpace, extraSpace, words));
            i = j;
        }
        
        return result;
    }
   string findLine(int i,int j,int eachGaddhe ,int newGaddhe,vector<string>& words){
    string line;
         for(int k=i;k<j;k++){
            line+=words[k];
             if(k==j-1) continue;
            for(int z=1;z<=eachGaddhe;z++)
                line+=" ";
            if(newGaddhe>0){
                  line+=" ";
                newGaddhe--;
            }
         }
            while(line.length()<MAX_WIDTH){
                  line+=" ";
            }
          return line;
    }
};