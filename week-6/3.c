#include <stdio.h>
#include <stdlib.h>
#define N 100

int len;

char* Set_String ()
{
  char *s = (char *) calloc (1, sizeof (char));
  char ch;
  while ((ch = getchar ()) && ch != '\n')
    {
      s = (char *) realloc (s, len + 1);
      s[len] = ch;
      len++;
    }
  s[len + 1] = '\0';
  return s;
}

int main ()
{
  char *str, str_r[N];
  printf ("Enter your text : ");
  str = Set_String (str);
  for (int i = 0; i < len; i++)
    {
      str_r[i] = str[len - 1 - i];
    }
  printf ("Text before : ");
  for (int i = 0; i < len; i++) printf("%c", *(str+i));
  printf ("\nText after : ");
  for (int i = 0; i < len; i++) printf("%c", *(str_r+i));
  return 0;
}