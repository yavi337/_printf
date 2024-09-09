int _putchar(char c)
{
return(write(1,&c,1));
}
// return value of function write is succ written bytes to fd and this case is 1, donc returning write function is equal to return 1
/*
int _putchar(char c)
{
write(1,&c,1);
return(1); 
}
*/
