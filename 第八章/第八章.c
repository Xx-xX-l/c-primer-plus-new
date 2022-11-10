//第一题

/*
#include <stdio.h>

int main(void)

{
	char ch;
	int i=0;
	printf("please enter whatever you want:\n");
	while ((ch = getchar()) != EOF)
	{
		i++;
	}
	printf("the number of character:%d", i);
	return 0;
}

*/

//第二题

/*
#include <stdio.h>

int main(void)

{
	int ch;
	int i = 0;
	printf("please enter whatever you want:\n");
	while ((ch = getchar()) != EOF)
	{


		if (i++ == 10)
		{
			putchar('\n');
			i = 1;
		}

		if (ch >= 32)
		{

			printf("  %c--%3d  ", ch, ch);
		}
		else if (ch == '\n')
		{
			printf("\\n--\\n\n",ch);

		}
		else if (ch == 't')
		{

			printf("\\t--\\t\n",ch);
		}
		else
		{
			printf("%c--^%c\n", ch, ch+64);
		}
	}

	return 0;
}

*/



//第三题

/*

#include <stdio.h>
#include <ctype.h>

int main(void)

{

	char ch;
	int i, j,k;
	i = j = k = 0;
	printf("please enter letters in alphabet:\n");
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			if (islower(ch))
			{
				i++;
			}
			else 
			{
				j++;
			}
		}
		
			
		else
		{
			while (ch != '\n')
			{
				k++;
				break;
			}

		}
	}
	printf("capital letters:%d\n lower case letter:%d\n non-alpha:%d\n", j, i,k);

	return 0;
}
*/

//第四题
//别人的答案

/*
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	float count;
	bool inword = false;
	int ch, words, letter;
	words = letter = 0;

	printf("Please enter some words (EOF to quit):\n");
	while ((ch = getchar()) != EOF)
	{
		if (ispunct(ch))
		{
			continue;
		}
		if (isalpha(ch))
		{
			letter++;
		}
		if (!isspace(ch) && !inword)  //非空格和inword=flase
		{
			inword = true;
			words++;
		}
		if (isspace(ch) && inword) //空格和inword=true
		{
			inword = false;
		}
	}
	count = (float)letter / words;
	printf("Total words: %d.\n", words);
	printf("Total letters: %d.\n", letter);
	printf("Average letters of words: %g.\n", count);

	return 0;
}

*/


//第五题

/*

#include <stdio.h>

int main(void)

{
	int guess = 50;
	int low = 1;
	int high = 100;
	char ch;
	printf("pick a integer from 1-100 in your mind, I will try to guess.\n");
	printf("Respond a y if i guess is right and with a b if i guess is bigger and l if i guess is less.\n");
	printf("Is your number %d?\n", guess);
	while((ch = getchar()) != 'y')
	{
		switch (ch)
		{
		case'b':
			low = guess;
			high = high;
			break;
		case 'l':
			high = guess;
			low = low;
			break;
		default:
			break;

		}
		guess = (low + high) / 2;
		while (getchar() != '\n')
			continue;
		printf("well, is it %d?\n", guess);
	}
	printf("I got it!!!");
	return 0;
}

*/