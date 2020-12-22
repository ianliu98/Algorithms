#include <stdio.h>

/* naive string matcher --> p209 */

#define MAX_LENGTH	1000

char pattern[3] = "eye";
int pattern_length = 3;
int get_line(void);
char line[MAX_LENGTH];

int main()
{
	int i, length, j;

	while((length=get_line())>0)
	{
		for (i=0; i<length-pattern_length; ++i)
		{
			j = 0;
			while (j<=pattern_length && line[i+j]==pattern[j])	// use while to find!!!
				++j;
			if (j>=pattern_length)
				printf("there is a valid shift!\n");
		}
	}

	return 0;
}

int get_line()
{
        int i,c;

        for(i=0; i<MAX_LENGTH && (c=getchar())!=EOF && c!='\n'; ++i)
                line[i] = c;
        if (c == '\n')
        {
                line[c] = '\n';
                ++i;
        }
        line[i] = '\0';
        return i;
}
