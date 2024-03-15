#include <stdio.h>
#include <string.h>
int transition_word_to_sec(char* word);
int main(void){
    char num[16];
    
    gets(num);
    printf("%d",transition_word_to_sec(num));
}
int transition_word_to_sec(char* word){
    int i=0;
    int secs=0;
    while(word[i]!='\0'){
        if(word[i]=='A'||word[i]=='B'||word[i]=='C'){
            secs+=2;
        }
        else if(word[i]=='D'||word[i]=='E'||word[i]=='F'){
            secs+=3;
        }
        else if(word[i]=='G'||word[i]=='H'||word[i]=='I'){
            secs+=4;
        }
        else if(word[i]=='J'||word[i]=='K'||word[i]=='L'){
            secs+=5;
        }
        else if(word[i]=='M'||word[i]=='N'||word[i]=='O'){
            secs+=6;
        }
        else if(word[i]=='P'||word[i]=='Q'||word[i]=='R'||word[i]=='S'){
            secs+=7;
        }
        else if(word[i]=='T'||word[i]=='U'||word[i]=='V'){
            secs+=8;
        }
        else if(word[i]=='W'||word[i]=='X'||word[i]=='Y'||word[i]=='Z'){
            secs+=9;
        }
        i++;
    }
    return i+secs;
}
