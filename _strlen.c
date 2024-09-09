int _putlen(char *string)
{
    int index = 0;
    while(string[index] != '\0')
    {
        index++;
    }
    return(index);
}
