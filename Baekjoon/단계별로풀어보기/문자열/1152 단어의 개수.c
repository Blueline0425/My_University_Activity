#include <stdio.h>
#include <string.h>

int cnt_word(char* s);
int main(void){
    char s[1000001];
    int cnt;
    
    gets(s);
    cnt=cnt_word(s);
    printf("%d",cnt);
    
    return 0;
}

int cnt_word(char* word){
    int cnt=0;
    int l;
    l=strlen(word);
    int space_cnt=0;
    int word_cnt=0;
    
    for(int i=0;i<l;i++){
        
        if(word[i]==' '){
            space_cnt++;
        }
        else{
            word_cnt++;
        }
        if(word_cnt>0){
            if(space_cnt==1){
                cnt++;
                space_cnt=0;
                word_cnt=0;
            }
            else if(space_cnt==0&&word[i+1]=='\0'){
                cnt++;
            }
        }
        else if(word_cnt==0&&space_cnt==1){
            space_cnt=0;
        }
    }
    return cnt;
}
