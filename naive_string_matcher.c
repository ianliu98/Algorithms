#include <stdio.h>

#define MAX_LINE	1000

char line[MAX_LINE];
int get_line(void);
char pattern[6] = "return";

int main()
{
	int length, i=0, n, line_index=0;
	
	while ((length=get_line()) > 0)
	{
		printf("%s",line);
		while(line[i]!='\n')
		{
			//printf("%c",line[i]);
			if (line[i] == pattern[0])
				for (n=0; n<6; ++n)
					if (line[i+n] == pattern[n])
						printf("Matched in line %d, column %d \n!", line_index, i);
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
