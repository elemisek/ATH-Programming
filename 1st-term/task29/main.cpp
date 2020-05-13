void sito(bool *tab, unsigned int n)
{
  for (int i=2; i*i<=n; i++) //przeszukujemy kolejnych kandydatów na pierwsze
    {              //wystarczy sprawdziæ do pierwiastka z n
                  // i<=sqrt(n) - podnosz¹c do kwadratu mamy
                  // i*i <= n
        if(!tab[i])        //jesli liczba jest pierwsza(ma wartosc 0)
    for (int j = i*i ; j<=n; j+=i) //to wykreslamy jej wielokrotnosci
            tab[j] = 1;      //ustawiaj¹c wartosæ na 1
    }
}
