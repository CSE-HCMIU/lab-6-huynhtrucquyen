#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ex3(char *str)
{
    char a[100], temp[100];
    char res_max[100] = "", res_min[100] = "12345677777777777";
    char words[100][100];
    int l[100];
    memset(l, 0, sizeof(l));
    memset(temp, 0, sizeof(temp));
    for (int i = 0; i < strlen(str); i++)
    {
        a[i] = str[i];
    }
    a[strlen(a)] = ' ';
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
            if (temp[0] != ' ')
            {
                if (strlen(res_max) < strlen(temp))
                {
                    memset(res_max, 0, sizeof(res_max));
                    for (int j = 0; j < strlen(temp); j++)
                        res_max[j] = temp[j];
                }
                if (strlen(res_min) > strlen(temp))
                {
                    memset(res_min, 0, sizeof(res_min));
                    for (int j = 0; j < strlen(temp); j++)
                        res_min[j] = temp[j];
                }
            }
            memset(temp, 0, sizeof(temp));
        }
        else
            temp[strlen(temp)] = a[i];
    }
    for (int i = 0; i < strlen(res_min); i++)
    {
        int check = res_min[i];
        if (check > 60)
            printf("%c", res_min[i]);
    }
    printf(" ");
    for (int i = 0; i < strlen(res_max); i++)
    {
        int check = res_max[i];
        if (check > 60)
            printf("%c", res_max[i]);
    }
}
 
int main(int argc, char *argv[])
{
    char *str = "This is a string";
    ex3(str);
 
    return 0;
}
