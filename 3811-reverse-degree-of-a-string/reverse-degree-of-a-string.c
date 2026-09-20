
int reverseDegree(char* s) {
    
    
    int num=0;
    for(int i=0;i<strlen(s);i++){
        int n=s[i]-'a'+1;
        int reverse=26-n+1;

        int x=(i+1);
        num=num+reverse*x;

    }
    return num;
}