#include <stdlib.h>
#include <stdio.h>

int is_charset(char c, char *charset)
{
    int i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
            return 1;
        i++;
    }
    return 0;
}

char **ft_split(char *str, char *charset)
{
    int i = 0;
    int word_count = 0;
    int word_index = 0;
    int start = 0;
    char **result = 0;
    int len = 0;
    int k = 0;

    // Compter le nombre de mots dans la string finale
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        if (str[i] != '\0')
        {
            word_count++;
            while (str[i] != '\0' && !is_charset(str[i], charset))
                i++;
        }
    }

    //Lui attribuer la bonne taille
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (result == 0)
        return 0;

    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && is_charset(str[i], charset))
            i++;
        if (str[i] != '\0')
        {
            start = i;
            while (str[i] != '\0' && !is_charset(str[i], charset))
                i++;
            len = i - start;
            result[word_index] = (char *)malloc(sizeof(char) * (len + 1));
            if (result[word_index] == 0)
                return 0;
            k = 0;
            while (k < len)
            {
                result[word_index][k] = str[start + k];
                k++;
            }
            result[word_index][k] = '\0';
            word_index++;
        }
    }
    result[word_index] = 0;
    return result;
}

int main(void)
{
    char *str = "I'm not ur ennemy, I am THE ennemy";
    char *charset = " ";
    char **tab;
    int i = 0;
    int j = 0;

    tab = ft_split(str, charset);
    if (split == 0)
    {
        printf("Allocation error\n");
        return 1;
    }

    while (tab[i] != 0)
    {
        printf("Mot %d: [%s]\n", i, tab[i]);
        j = 0;
        while (tab[i][j] != '\0')
        {
            j++;
        }
        free(tab[i]);
        i++;
    }
    free(tab);
    return 0;
}
