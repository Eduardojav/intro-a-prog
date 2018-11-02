# incluye  < iostream >
# include  < random >
utilizando  namespace  std ;

int  randint ( int min, int max)
{
    static default_random_engine corrió;
    return uniform_int_distribution <> {min, max} (corrido);
}

int  randint ( int max) { return  randint ( 0 , max);}

int  main ()
{
    para ( int i = 0 ; i < 20 ; i ++)
        cout << randint ( 9 ) << "  " ;
    cout << endl;
    devuelve  0 ;
}
