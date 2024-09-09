int _put_rev_str(char *string)
{
    int index = _putlen(string);
    index -=1;
    while(index >= 0)
    {
        _putchar(string[index]);
        index--;
    }
    return(_putlen(string)-1);
}
/*
int _put_rev_str(char *string) 
{
    char rev_str[_putlen(string) + 1];
    int index = 0;
    int rev_index = _putlen(string) - 1;

    while (rev_index >= 0) 
    {
        rev_str[index] = string[rev_index];
        index++;
        rev_index--;
    }
    
    rev_str[index] = '\0';
    index = 0;
    
    while (rev_str[index] != '\0') 
    {
        _putchar(rev_str[index]);
        index++;
    }
    return (_putlen(string) -1 );
}
*/
