#include <stdio.h>
#include <string.h>


void reverse(char* str) {
    
    int i, j, len;
    char temp;
    i=j=len=temp=0;
    
    len=strlen(str);
    for(i=0, j=len-1; i<=j; i++, j--) {
        
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}


int main()
{
    char array[]="samohT";
    
    printf("Original: %s\n",array);
    reverse(array);
    printf("Umgedreht: %s\n",array);
    return 0;
}
