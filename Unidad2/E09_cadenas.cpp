#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string cadena = "universidad";
    char texto[30] = "PoliTecnicA";
    int longitud = cadena.length(), voci = 0, allvoc = 0,voco = 0, vocu = 0, voca = 0, voce = 0, i=0, lowcount = 0, upcount = 0;
    for (int i = 0; i < longitud; i++)      //imprime universidad
    {
        cout << cadena[i] << endl;

        if (cadena[i] == 'i' || cadena[i] == 'I')  // cuenta vocales i
        {
            voci = voci + 1;
            allvoc = allvoc + 1;         // cuenta todas las vocales
            
        }
         if (cadena[i] == 'a'|| cadena[i] == 'A')
        {
           voca = voca + 1;                    //cuenta vocales A y a
            allvoc = allvoc + 1;                //cuenta todas vocales 
            
        } if (cadena[i] == 'e' || cadena[i] == 'E')
        {
          voce = voce + 1;
            allvoc = allvoc + 1;
            
        } if (cadena[i] == 'o' || cadena[i] == 'O')
        {
            voco = voco + 1;
            allvoc = allvoc + 1;
            
        } if (cadena[i] == 'u' || cadena[i] == 'U') 
        {
            vocu = vocu + 1;
            allvoc = allvoc + 1;
            
        }

    }
    cout  << "...Hecho \n" << endl;
    cout << "cantidad de a = " << voca << endl;
    cout << "cantidad de e = " << voce << endl;
     cout << "cantidad de i = " << voci << endl;
    cout << "cantidad de o = " << voco << endl;
    cout << "cantidad de u = " << vocu << endl;
    cout << "cantidad de vocales = " << allvoc << endl;


    printf ("\n ________________________________________________________\n \n");

    i=0;
    while (texto[i] != '\0')
    {
        cout << texto[i] << " "; //imprime poliecnica
        i++;
    }
    cout << "\n...Hecho\n\n" << endl;

    for (int i = 0; i < 30; i++)    
    {
        cout << texto [i] << " ";
    }

     i = 0;

     while (texto[i] != '\0')
    {
        if (islower(texto[i]))
        {
            lowcount = lowcount + 1;    //cuenta minusculas
        }
        else if (isupper(texto[i])) 
        {
            upcount = upcount + 1;           //cuenta mayusculas
        }
        i++;
    }
    cout << "\n\nCantidad de letras mayusculas: " << upcount << endl;
    cout << "Cantidad de letras minusculas: " << lowcount << endl;


    i = 0;
    while (texto[i] != '\0'){

    if (islower(texto[i]))
    {
        texto[i] = toupper(texto[i]);    //cambiar may a min y biceverssa
    }
    else
    {
        texto[i] = tolower(texto[i]);
    }
        i++;
    }

    cout << texto << endl;






    
             if (isalpha(texto[0]))
            {
                cout << "El caracter es una letra" << endl; //verificación
            }
            else
            {
                cout << "El caracter no es una letra" << endl;
            }

            if (isdigit(texto[0]))
            {
                cout << "El caracter es un numero" << endl;
            }
            else
            {
                cout << "El caracter no es un numero" << endl;
            }

            if (isalnum(texto[0]))
            {
                cout << "El caracter es alfanumerico" << endl;
            }
            else
            {
                cout << "El caracter no es alfanumerico" << endl;
            }

            if (islower(texto[0]))
            {
                cout << "El caracter es minuscula" << endl;
            }
            else
            {
                cout << "El caracter no es minuscula" << endl;
            }

            if (isupper(texto[0]))
            {
                cout << "El caracter es mayuscula" << endl;
            }
            else
            {
                cout << "El caracter no es mayuscula" << endl;
            } 

            int words;
            char texto1[50] = "Hola Amigo Mio";
            while (texto1[i] != '\0')
            {
                if (isspace(texto[i]))
                {
                    words = words + 1;
                }
                
                
            }
            
          cout << "Cantidad de palabras: " << words << endl;  
            

    return 0;
}
