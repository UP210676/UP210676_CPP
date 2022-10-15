#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 5;
    for (int i = 0; i <= 10; i++)
    {
        if (i==6)
        {
            continue;

        } else {
            std::cout << i << std::endl;
        }
       printf ("numero: %d  ", i);  
    }

    printf ("\n");

        
    for (int i = 0; i <= 10; i++)
    {
        if (i==6)
        {
            break;

        } else {
            std::cout << i << std::endl;
        }
        
    }
    return 0;
}
