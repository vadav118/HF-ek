#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef char* string;

int strcmpi(const char* s1, const char* s2){
    int diff;
    int i=0;
    int l1=strlen(s1),l2=strlen(s2);
    
    while (i<l1 && i<l2)
    {   
       if(toupper(s1[i])!=toupper(s2[i])){
            diff++;
       }
       i++;
    }
    

    diff+=abs((l1-i)-(l2-i));
    return diff;
}

int main(){
    string s1="feher";
    string s2="FeHER";

    printf("%d\n",strcmpi(s1,s2));

    return 0;
}