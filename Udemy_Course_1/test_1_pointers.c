int string_length(char *s) {
   int c = 0;
   
   while(s[c] != '\0')
      c++;
     
   return c;
}