# incluye  < iostream >

utilizando  namespace  std ;

clase  Bad_area {};
int  área ( int longitud, int ancho)
{
    if (longitud <= 0 || ancho <= 0 ) lanza Bad_area {};
    longitud de retorno * ancho;
}
int  framed_area ( int x, int y)
{
    const  int frame_width = 2 ;
    if (x-frame_width <= 0 || y-frame_width <= 0 )
        lanzar  runtime_error ( " argumento negativo " );
     área de retorno (x-frame_width, y-frame_width);
}
int  main ()
tratar
{
    int x = - 1 ;
    int y = 2 ;
    int z = 4 ;
    int area1 = area (x, y);
    int area2 = framed_area ( 1 , z);
}
atrapar (Bad_area) {
    cout << " ¡Ups! argumentos invalidos para area () " << endl;
}
