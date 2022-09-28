#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
char letra = 'Z';
for (int i = 0; i < 26 ; i++)
{
printf("%c \t",letra);
letra = letra - 1;
}

printf("\n");
letra = 'z';

for (int i = 0; i < 26 ; i++)
{
printf("%c \t",letra);
letra = letra - 1;
}

                    printf("\n");
                        int num=1;
                    for (int j = 0; j < 10; j++)
                    {
                        printf ("%i \t", num);
                        num = num + 1;
                    }

                        printf("\n");
                        num=10;
                    for (int j = 0; j < 10; j++)
                    {
                        printf ("%i \t", num);
                        num = num - 1;
                    }
                    
                

    return 0;
}
