#include <stdio.h>
#include <string.h>

int main(void){
    char cro[101];
    gets(cro);
    printf("%d",search_cro(cro));
}
int search_cro(char* a){
    int count=0;
    int l=strlen(a);
    
    for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'c' && a[i + 1] == '='|| a[i] == 'c' && a[i + 1] == '-'|| a[i] == 'l' && a[i + 1] == 'j'|| a[i] == 'n' && a[i + 1] == 'j'|| a[i] == 's' && a[i + 1] == '='|| a[i] == 'z' && a[i + 1] == '='||a[i] == 'd' && a[i + 1] == '-') {
			count++;
			i+=1;
		}
		else if (a[i] == 'd'&& a[i + 1] == 'z' && a[i + 2] == '=')
		{
			count++;
			i+=2;
		}
		else
		{
			count++;
		}
	}  
    return count;
}  
