int _putnbr(int nb)
{
 int count = 0;
 if (nb == -2147483648)
 {
    write(1, "-2147483648", 11);
    return (11);
 }
   
 if (nb < 0)
 {
  count += _putchar('-');
  nb *= -1;
 }
 if (nb > 9)
 {
    count += _putnbr(nb / 10);
    count += _putnbr(nb % 10);
 }
 else
    count += _putchar(nb + 48);
    return (count);
}
