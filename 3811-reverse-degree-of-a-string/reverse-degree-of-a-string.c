
int reverseDegree(char* s) {
    
    
    int num=0;
    for(int i=0;i<strlen(s);i++){
        int reverse='z'-s[i]+1;
        int x=(i+1);
        num=num+reverse*x;

    }
    return num;
}