#include<stdio.h>
#include<stringgit.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(!((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='z')))
        {
            int j=1;
            while(!((arr[i+j]>='a'&&arr[i+j]<='z')||(arr[i+j]>='A'&&arr[i+j]<='z')))j++;
            strcpy(&arr[i],&arr[i+j]);
        }
    }
    printf("%s",arr);
    return 0;
}