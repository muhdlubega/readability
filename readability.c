#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //program necessary steps to calculate number of letters, words and sentences
    //define each object clearly including the whole string itself
    int i, lt = 0, w = 1, sen = 0;

    //get input from user and calculate the string length using the string.h library
    string str = get_string("Text: ");
    int len = strlen(str);

    //set parameters for calculation of letters, words and sentences using their own definition
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            lt++;
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            sen++;
        }

        else if (str[i] == ' ')
        {
            w++;
        }

    }

    //input the algorithm in code form to set the grading system
    //to ensure a solid answer, the variables are to be input as float
    float L = lt * 100 / w;
    float S = sen * 100 / w;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    //index is then changed into an int and rounded
    int gr;
    gr = (int) round(index);

    //set the maximum and minimum limits based off the regulations
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }

    //output result as an integer
    else
    {
        printf("Grade %i\n", gr);
    }
}
