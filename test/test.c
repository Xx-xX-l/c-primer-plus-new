#include <stdio.h>
#define STOP '#'

int main(void)
{
    int ch;
    int n = 0;
    int flag = 0;

    printf("Enter some characters('#' to quit):\n");
    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
        case 'e':
        {
            flag = 1;
            //������һ������e�ı��;
            break;
        }
        case 'i':
        {
            if (1 == flag)
            {
                n++;
            }
            //��ͳ��ei���ֵĴ���;
            flag = 0;
            break;
        }
        default:
        {
            flag = 0;
            //�����e����һ���ַ�����i��������;
        }
        }
    }
    printf("\nTotally exist %d times \'ei\'.\n", n);

    return 0;
}
