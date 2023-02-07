import sys


def main():
    while True:
        # program necessary steps to calculate number of letters, words and sentences
        # get input from the user as a string
        string = input("Text: ")

        # define and initiate each instance clearly
        lt = 0
        w = 1
        sen = 0

        for i in string:
            # increase number of letters if the letters A-Z are present in the string
            if (i >= 'a' and i <= 'z') or (i >= 'A' and i <= 'Z'):
                lt += 1

            # increase number of sentences if '.', '!' or '?' are present in the string
            if i == '.' or i == '!' or i == '?':
                sen += 1

            # increase number of words if spaces are present in the string
            elif i == ' ':
                w += 1

        # input the algorithm in code form to set the grading system and round answer as an integer
        L = lt * 100 / w
        S = sen * 100 / w
        index = (0.0588 * L) - (0.296 * S) - 15.8
        grade = int(round(index))

        # set the maximum and minimum limits based off the regulations
        if index < 1:
            print("Before Grade 1")

        elif (index > 16):
            print("Grade 16+")

        else:
            print("Grade", grade)

        sys.exit()


main()