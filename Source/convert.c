/*
*File: convert.h
*Author: Nguyen Phi Hung
*Date: 11/03/2023
*Description: define functions which were declarated in header file
*/
#include<convert.h>
/*
*Function: converStringToBinary
*Description: Convert string to binary
*Input:
*   arr: Pointer to the string which need to be converted
*Output:
*   Binary code corresponding to each character
*/
void converStringToBinary(char* arr)
{
    int i = 0;
    /*Array save binary code*/
    int binaryCode[10];                             
    while(i < strlen(arr))
    {
        int j = 0;
        /*Decimal value of character*/
        int decValue = arr[i];                  
        if(arr[i] == ' ') printf("Space: ");
        else printf("%c: ",arr[i]);
        while(decValue > 0)
        {
            binaryCode[j] = decValue % 2;                 
            j++;
            decValue = decValue / 2;
        }
        /*Print binary code*/
        for(int k = j - 1 ; k >= 0; k--)    
        {
            printf("%d",binaryCode[k]);
        }
        printf("\n");
        i++;
    }
}