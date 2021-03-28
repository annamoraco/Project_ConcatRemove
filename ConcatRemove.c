#include <stdio.h>
#include <string.h>

char *ConcatRemove (char s[], char t[], int k)
{
  int c = 0, r, comands;


  if (k >= strlen (t) + strlen (s) - 2)
      return "Yes";

  if (strlen (t) == strlen (s) && k < strlen (t) + strlen (s) - 2)
      return "No";

  if (strlen (s) > strlen (t))
    {

      while (strncmp (s, t, strlen (t) - c) != 0)
	    c++;

      r = strlen (s) - strlen (t) + c - 1 ;

      comands = r + strlen (t) - (strlen (s) - r) ;

    }

  if (strlen (t) > strlen (s))
    {

      while (strncmp (s, t, strlen (s) - c) != 0)
	    c++;
      comands = strlen (t) - strlen (s) + c - 1;
      printf("%d",c);
    }

    if (comands == k)
        return "Yes";

    else
        return "No";
}


int main ()
{
  char s[100], t[100];
  int k;

  printf("\nType s: ");
  fgets (s, 100, stdin);
  printf("\nType t: ");
  fgets (t, 100, stdin);
  printf("\nType k: ");
  scanf ("%d", &k);

  printf(ConcatRemove(s,t,k));

}
