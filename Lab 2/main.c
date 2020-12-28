#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exitVar = 1;
char phoneNum[100];
short lengthPhoneNum;
unsigned char formattedhalfOne[4];
unsigned char formattedhalfTwo[4];

int main()
{
    while(exitVar == 1)
    {
    phoneNum[0] = '6'; /** Hard codes 6 to the first spot of the array so the user cannot use 1 or 0 as the first digit**/
    formattedhalfOne[4]='-';

    printf("Enter a phone number: ");
    scanf("%s", phoneNum);
    lengthPhoneNum = strlen(phoneNum);

    printf("length of string: %u\n", lengthPhoneNum);

        while(phoneNum[0] != '0' || phoneNum[0] != '1')
        {
            printf("Original number: %s\n", phoneNum);

            if(lengthPhoneNum == 7)
            {
                int i;

                formattedhalfTwo[0]=phoneNum[4];

                for(i = 0; i < 3; i++)
                    formattedhalfOne[i]=phoneNum[i];


                printf("Formatted number: %s", formattedhalfOne);
                printf("%c", formattedhalfOne[4]);

                for(i = 3; i < 7; i++)
                {
                    formattedhalfTwo[i]=phoneNum[i];
                    printf("%c", formattedhalfTwo[i]);
                }
                printf("\n");
                break;
                }

                else
                {
                    printf("Invalid phone number\n");
                    printf("The number entered is not 7-Digit long\n");
                    break;
                }
        }
    }
    printf("Quit signal received\n");
    return 0;
}
