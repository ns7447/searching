#include <stdio.h> #include <string.h> int main()
{
int t; scanf("%d",&t); while(t--)
{
char s[100];
scanf("%s",s);
int i , count1 = 0 , count2 = 0; for(i=0; i<strlen(s); i++)
if(s[i]=='S' && s[i+1]=='U' && s[i+2]=='V' && s[i+3]=='O') if(s[i+4]=='J' && s[i+5]=='I' && s[i+6]=='T')
count2++; else
count1++;
printf("SUVO = %d, SUVOJIT = %d\n",count1,count2);
}
return 0; }
