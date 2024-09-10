int _rot_13(char *string)
{
    char *temp = string;
    int index = 0;
    while(temp[index] != '\0')
    {
        if((temp[index] >= 'a' && temp[index] <= 'm') || (temp[index] >= 'A' && temp[index] <= 'M'))
        {
            temp[index] = temp[index] + 13;
        }
        else if if((temp[index] >= 'n' && temp[index] <= 'z') || (temp[index] >= 'N' && temp[index] <= 'Z'))
        {
            temp[index] = temp[index] - 13;
        }
        index++;
    }
    return(_putstr(temp));
}
