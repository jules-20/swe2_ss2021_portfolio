#include <stdio.h>

char *strcpy(char dest[], const char src[]);
int strcmp(const char str1[], const char str2[]);
char *strcat(char dest[], const char src[]);
char *strncat1(char dest[], const char src[], int n);
char *strchr(const char str[], int c);
char *strstr1(const char *s1, const char *s2);

int main()
{

    char src[1000], dest[1000];
    char str1[1000], str2[1000];
    char str[100] = "Das ist ein String fuer die strchar Funktion";
    char s1[100] = "Das ist ein Test String fuer die strstr Funktion";
    char *ret;
    int n;
    char *p;

    printf("1) String kopieren \nEingabe eines Strings: ");
    gets(src);

    strcpy(dest, src);
    printf("Der kopierte String: %s \n", dest);

    //////////

    printf("------ \n2) Strings vergleichen \nEingabe des ersten Strings fuer einen Abgleich: ");
    gets(str1);

    printf("Eingabe des zweiten Strings fuer einen Abgleich: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings sind gleich.\n");
    }
    else
    {
        printf("Strings sind ungleich.\n");
    }

    //////////

    printf("------ \n3) Strings zusammenfuegen \nEingabe des ersten Strings der zusammengefuegt werden soll: \n");
    gets(dest);

    printf("Eingabe des zweiten Strings der angehaengt werden soll: ");
    gets(src);

    strcat(dest, src);
    printf("Der zusammengesetzte String: %s \n", dest);

    //////////

    printf("------ \n4) Teilstring zusammenfuegen: \nEingabe des ersten Strings: \n");
    gets(dest);

    printf("Eingabe des zweiten Strings der angehaengt werden soll: ");
    gets(src);

    printf("Anzahl der Zeichen des Teilstrings: ");
    scanf("%d", &n);

    strncat1(dest, src, n);
    printf("Der zusammengesetzte String: %s \n", dest);

    //////////

    //Aufgabe 5 und 6 bewusst keine Eingabe, da scanf-Funktion abbricht
    //scanf-Funktion allerdings in separatem C-File bei strchr() und strstr1() ausfuehrbar

    printf("------ \n5) Buchstaben finden und restlichen String ausgeben \n");

    ret = strchr(str, 'd');

    printf("String ab dem gesuchten Buchstaben 'd': %s \n", ret);

    //////////

    printf("------ \n6) Substring finden und restlichen String ausgeben \n");
    p = strstr1(s1, "die");

    if (p)
    {
        printf("String 'die' ist im Teil:\n%s", p);
    }
    else
    {
        printf("String nicht gefunden!\n");
    }

    return 0;
}

//String kopieren
char *strcpy(char dest[], const char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

//Strings vergleichen
int strcmp(const char str1[], const char str2[])
{
    int i = 0;

    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }

    return (int)*str1 - (int)*str2;
}

//Strings zusammensetzen
char *strcat(char dest[], const char src[])
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

//Teilstring zusammenfuegen
char *strncat1(char dest[], const char src[], int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

//Buchstaben finden und restlichen String ausgeben
char *strchr(const char str[], int c)
{
    if (str == NULL)
    {
        return NULL;
    }

    while (*str != 0)
    {
        if (*str == (char)c)
        {
            return str;
        }
        str++;
    }

    return NULL;
}

//Substring finden und restlichen String ausgeben
char *strstr1(const char *s1, const char *s2)
{
    const char *p1;
    const char *p2;

    p2 = s2;

    if (*p2 == NULL)
    {
        return NULL;
    }

    while (*s1 != NULL)
    {
        s1++;

        p1 = s1;
        while (1)
        {
            if (*p2 == NULL)
            {
                return (char *)s1;
            }
            if (*p1++ != *p2++)
            {
                break;
            }
        }
        p2 = s2;
    }

    return NULL;
}
