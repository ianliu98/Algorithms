#include <stdio.h>

#define MAX_LINE	1000

char line[MAX_LINE];
int get_line(void);
char pattern[3] = "eye";
int pattern_length = 3;

int main()
{
	int length, i, n, line_index=0;
	
	while ((length=get_line()) > 0)
	{
		i = 0;
		while(i<length)		// try not use single line[i]!='\n' as condition
		{
			if (line[i] == pattern[0])
				for (n=0; n<pattern_length; ++n){
					if (line[i+n] != pattern[n])
						break;
					if (n == (pattern_length-1))
						printf("Matched in line %d, column %d! \n", line_index, i);
				}
			++i;
		}
		++line_index;
	}
	return 0;
}

int get_line()
{
	int i,c;

	for(i=0; i<MAX_LINE && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[c] = '\n';
		++i;
	}
	line[i] = '\0';
	return i;
}
