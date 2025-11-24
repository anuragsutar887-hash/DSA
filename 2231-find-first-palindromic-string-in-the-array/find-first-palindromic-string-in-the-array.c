char* firstPalindrome(char** words, int wordsSize) {
    for(int k=0;k<wordsSize;k++){
        char*s=words[k];
        int i=0,j=strlen(s) -1;
        int palindrome=1;
        while(i<j){
            if(s[i] != s[j]){
                palindrome=0;
                break;
            }
            i++;
            j--;
        }
        if(palindrome)return s;
    }
    return  "";
}