#include <stdio.h>
#include <string.h>



	int main()
	{
	    char a [1000];
	    char temp [5];
	    int length;
	    int i;
	    int value;

	    while ( gets (a) ) {
	        if ( a [0] > 47 && a [0] < 58 ) {
	            i = strlen (a) - 1;

	            while ( i >= 0 ) {
	                temp [0] =a [i];
	                temp [1] = ' ';
	                value = atoi (temp);
	                if ( value < 3 ) {
	                    temp [0] = a [i];
	                    temp [1] = a [i - 1];
	                    temp [2] = a [i - 2];
	                    temp [3] = ' ';
	                    i -= 3;
	                    value = atoi (temp);
	                }

	                else {
	                    temp [0] = a [i];
	                    temp [1] = a [i - 1];
	                    temp [2] = ' ';
	                    i -= 2;
	                    value = atoi (temp);
	                }
	                printf("%c", value);
	            }
	        }

	        else {
	            length = strlen (a);

	            for ( i = length - 1; i >= 0; i-- ) {
	                value = a [i];
	                while ( value ) {
	                    printf("%d", value % 10);
	                    value /= 10;
	                }
	            }
	        }
	        printf("\n");
	    }
	    return 0;
	}
