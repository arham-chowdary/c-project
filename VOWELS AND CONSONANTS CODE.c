#include <stdio.h>
int
main ()
{
  
char alphabet;
  
int lv, uv;
  
printf ("Enter an alphabet: ");
  
scanf ("%c", &alphabet);
  
 
lv = (alphabet == 'a' || alphabet == 'e' || alphabet == 'i'
	   || alphabet == 'o' || alphabet == 'u');
  
 
 
uv = (alphabet == 'A' || alphabet == 'E' || alphabet == 'I'
	     || alphabet == 'O' || alphabet == 'U');
  
 
 
if (lv || uv)
    
printf ("%c - vowel", alphabet);
  
  else
    
printf ("%c - consonant", alphabet);
  
return 0;
/*output:
Enter an alphabet: z
z - consonant*/

