int firstUniqChar(char* s) {
    int arr[256]={0};
    for(int i=0;s[i]!='\0';i++){
        arr[(unsigned char)s[i]]++;
    }
    for(int i=0;s[i]!='\0';i++){
        if(arr[(unsigned char)s[i]]==1){
            return i;
        }
    }
    return -1;
}