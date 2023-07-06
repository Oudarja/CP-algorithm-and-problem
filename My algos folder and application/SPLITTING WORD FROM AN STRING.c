#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],*token;
    //scanf("%[^\n]",str);
    string str;
    cin>>str;
    token=strtok(str," ");
    while(token)
    {
        printf("%s\n",token);
        token=strtok(NULL," ");
    }
    return 0;
}
