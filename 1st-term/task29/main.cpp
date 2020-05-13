void sito(bool *tab, unsigned int n)
{
  for (int i=2; i*i<=n; i++) //przeszukujemy kolejnych kandydat�w na pierwsze
    {              //wystarczy sprawdzi� do pierwiastka z n
                  // i<=sqrt(n) - podnosz�c do kwadratu mamy
                  // i*i <= n
        if(!tab[i])        //jesli liczba jest pierwsza(ma wartosc 0)
    for (int j = i*i ; j<=n; j+=i) //to wykreslamy jej wielokrotnosci
            tab[j] = 1;      //ustawiaj�c wartos� na 1
    }
}
