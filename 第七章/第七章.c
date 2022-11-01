
//第一题
/*
#include <stdio.h>

int main(void)

{
	int space,n,other;
	space = n = other = 0;
	printf("please input whatever you want:");
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
		{
			space++;
		}
		else if (ch == '\n')
		{
			n++;
		}
		else
		{
			other++;
		}
	}
	printf("the number of space is %d, \\n is %d, and other is %d ", space, n, other);
	printf("\ndone");
	return 0;

}

*/

//第二题


/*
#include <stdio.h>

int main(void)

{
	int i = 0;
	char ch;
	printf("input whatever you want:\n");
	while ((ch = getchar()) != '#')
	{
		if (i++ % 8 == 0)
		{
			putchar('\n');
		}
		if (ch == '\n')
		{
			printf("\\n--%d  ", ch);
		}
		else if (ch == '\t')
		{
			printf("\\t--%d  ", ch);
		}
		else
		{
			printf("%c--%d  ",ch,ch);
		}

	}
	printf("\nDONE!");
	return 0;

}

*/

//第三题
/*
#include <stdio.h>

int main(void)

{

	int num,even,odd;
	int i, j;
	even = odd = i = j = 0;
	printf("please input integers:\n");
	while ((scanf_s("%d", &num)) == 1 && (num != 0))
	{
		if (num % 2 == 0)
		{
			i++;
			even += num ;
		}
		else
		{
			j++;
			odd += num;
		}
	}
	printf("even:%d,odd:%d,even average:%d,odd average:%d", i, j, even / i, odd / j);
	return 0;
}
*/

//第四题

/*

#include <stdio.h>

int main(void)

{
	char ch;
	int i;
	i= 0;
	printf("please enter whatever you want:\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			i++;
		}
		else if (ch == '!')
		{
			printf("!!");
			i++;
		}
		else
		{
			putchar(ch);
		}
	
	}

	printf("the number of replace is %d", i);
	return 0;
}

*/

//第五题

/*
#include <stdio.h>

int main(void)

{
	char ch;
	int i;
	i = 0;
	printf("please enter whatever you want:\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!');
			i++;
			break;
		case'!':
			printf("!!");
			i++;
			break;
		default:
			putchar(ch);

		}
	}
	printf("the number of replace is %d", i);
	return 0;

}
*/


//第六题
/*
#include <stdio.h>

int main(void)

{
	int a = 0;
	int i = 0;
	char ch[100];
	printf("please enter whatever you want :\n");
	while ((ch = getchar()) != '#')
	{
		
	}
	printf("the number of 'ei' is %d.", i);
	return 0;
}

*/


// 第九题

#include <stdio.h>

int main(void)

{
	int num;
	int i, j;
	i = 1;
	int flag;

	printf("please enter a positive integer(0 to quit): \n");
	while ((scanf_s("%d", &num)) == 1 && (num > 0))
	{
		for (i; i <= num; i++)
		{
			flag = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j != 0)
				{
					flag++;

				}
				else
				{
					flag = 0;
				}
			}
			if (flag == i - 2)

			{
				printf("\n%d" ,i);
			}

		}
			
	}


	return 0;
}


