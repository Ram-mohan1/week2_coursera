#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp;
	int i,count_a=0;
	scanf("%s",str);
	int length=strlen(str);
	for(i=0;i<length;i++)
    {
        if(str[i]=='a')
        {
            count_a++;
        }
    }
    if(count_a>(length/2))
    {
        printf("%d ",length);
    }
    else
    {
        printf("%d ",2*count_a-1);
    }
	return 0;
}
