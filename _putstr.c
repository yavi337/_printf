/*
int _putstr(char *string)
{
    int index = 0;
    if(string == 0)
    {
        string = "(null)";
    }
    while(string[index] != '\0')
    {
        _putchar(string[index]);
        index++;
    }
    return(index);
}
*/
int _putstr(char *string)
{
    int index = 0;
    if(string == 0)
    {
        return(_putstr("(null)"));
    }
    while(string[index] != '\0')
    {
      _putchar(string[index]);
      index++;
    }
    return(index);
}
