/* A simple version of the standard
gets() library function. */
char *xgets(char *s){
  char ch, *p;
  int t;
  p = s; /* gets() returns a pointer to s */
  for(t=0; t<80; ++t){
    ch = getchar();
    switch(ch) {
      case '\n':
      s[t] = '\0'; /* terminate the string */
      return p;
      case '\b':
      if(t>0) t--;
      break;
      default:
      s[t] = ch;
    }
  }
  s[79] = '\0';
  return p;
}
