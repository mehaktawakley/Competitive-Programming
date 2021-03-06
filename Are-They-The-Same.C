/*
You are given two strings. You have to check if the strings are permutations of each other and output "YES" or "NO" accordingly without quotes.


Input: 
2 lines of input each containing a string. (a to z and 0 to 9) 
Output: 
A single line containing YES or NO.


Constraints:
String would not contain any spaces. size of string < 100 
NOTE : This is a golf question. Shorter code will get highest points.

SAMPLE INPUT 
mindsweepers
swrepeesdnim
SAMPLE OUTPUT 
YES
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char s1[100];
    char s2[100];
    int a[123]={0},b[123]={0},i,f=0;
    
    scanf("%s",s1);
    scanf("%s",s2);
    
    for(i=0;i<strlen(s1);i++)
    {
        a[s1[i]]++;
        b[s2[i]]++;
    }
    
    for(i=0;i<123;i++)
    {
        if(a[i]!=b[i])
        {
            printf("NO");
            f=1;
            break;
        }
    }
    
    if (f==0)
    printf("YES");
    
}