#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%[^
]s", str);
    int s;
    s=0;
    int i;
    for (i = 0; str[i] != NULL; i++) 
	{
        if(str[i]>='0'&&str[i]<='9')
		{
            s++;
        }
    }
    if(s>0)
    {
        printf("Contains %d digit",s);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}
