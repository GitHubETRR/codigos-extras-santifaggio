int main()
{
    char var=2;
    char*var_ptr=&var;
    
    printf("var vale:%d\n" ,var);
    printf("la dirección de var es :%d\n" , &var);
    printf("la dirección del puntero es %d\n" ,&var_ptr);
    sizeof var_ptr
    printf("el puntero ocupa esta cantidad de bytes:%d\n", sizeof var_ptr);
}