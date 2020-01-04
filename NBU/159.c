#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000];
	gets(str);
	int i,n;
	int times[100]={0};
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		switch(str[i])
		{
			case 'a':
			case 'A':times[65]++;break;
			case 'b':
			case 'B':times[66]++;break;
			case 'c':
			case 'C':times[67]++;break;
			case 'd':
			case 'D':times[68]++;break;
			case 'e':
			case 'E':times[69]++;break;
			case 'F':
			case 'f':times[70]++;break;
			case 'G':
			case 'g':times[71]++;break;
			case 'h':
			case 'H':times[72]++;break;
			case 'i':
			case 'I':times[73]++;break;
			case 'j':
			case 'J':times[74]++;break;
			case 'K':
			case 'k':times[75]++;break;
			case 'L':
			case 'l':times[76]++;break;
			case 'M':
			case 'm':times[77]++;break;
			case 'n':
			case 'N':times[78]++;break;
			case 'O':
			case 'o':times[79]++;break;
			case 'p':
			case 'P':times[80]++;break;
			case 'q':
			case 'Q':times[81]++;break;
			case 'R':
			case 'r':times[82]++;break;
			case 's':
			case 'S':times[83]++;break;
			case 'T':
			case 't':times[84]++;break;
			case 'u':
			case 'U':times[85]++;break;
			case 'v':
			case 'V':times[86]++;break;
			case 'w':
			case 'W':times[87]++;break;
			case 'X':
			case 'x':times[88]++;break;
			case 'y':
			case 'Y':times[89]++;break;
			case 'z':
			case 'Z':times[90]++;break;
		}
	}
	for(i=65;i<=90;i++)
	{
		if(times[i]!=0)
			printf("'%c':%d\n",i,times[i]);
	}
	// for(i=0;i<=26;i++)
	// {
	// 	printf("%d\n",times[i] );
	// }
	return 0;
}