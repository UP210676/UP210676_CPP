#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
char letra = 'A';
for (int i = 0; i < 26 ; i++)
{
printf("%c ",letra);
letra = letra + 1;
}

printf("\n");
letra = 'z';

for (int i = 0; i < 26 ; i++)
{
printf("%c ",letra);
letra = letra - 1;
}

                    printf("\n");
                        int num=1;
                    for (int j = 0; j < 10; j++)
                    {
                        printf ("%i ", num);
                        num = num + 1;
                    }

                        printf("\n");
                        num=10;
                    for (int j = 10; j > 0 ; j--)
                    {
                        printf ("%i ", num);
                        num = num - 1;
                    }
                    
                

    return 0;
}
