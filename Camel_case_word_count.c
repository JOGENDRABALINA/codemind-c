#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%[^
]s", str);
    int word;
    word = 1;
    int i;
    for (i = 0; str[i] != NULL; i++) 
	{
        if(str[i]>='A'&&str[i]<='Z')
		{
            word++;
        }
    }
    if(str[0]>='A'&&str[0]<='Z')
    {
    	printf("%d",word-1);
	}
	else
	{
		printf("%d",word);
	}
}
