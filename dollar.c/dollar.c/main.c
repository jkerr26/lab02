/* Justin Kerr
* 09/3/2019
* dollar conversion to british pounds and japanese yen
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define DOLLARS_PER_BRITISH_POUND 0.6
#define DOLLARS_PER_JPY 76.8

int main(int argc, char **argv)
{
    double DOLLARS,             /* Input of dollars */
    BRITISH_POUND,              /* Output in BRITISH_POUND */
    JPY,                                        /* Output in JPY */
    USD;
    
/* Conversions */
printf("Please input total amount of US Dollars>\n ");
    scanf("%lf", &DOLLARS);
    USD = DOLLARS * 0.9 /2;
    BRITISH_POUND = USD *DOLLARS_PER_BRITISH_POUND;
    JPY = USD * DOLLARS_PER_JPY;
    
    /* Display outputs in the conversions */
    
    printf("You get %f British Pounds and %f Japanese Yen.\n", BRITISH_POUND, JPY);
    
    return (0);
}
