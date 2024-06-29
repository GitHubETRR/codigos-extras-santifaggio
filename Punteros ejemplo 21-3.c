int main()
{
    char var=5;
    char * var_ptr=&var;
    
    printf("var vale: %d\n" ,var);
    printf("la dirección de var es: %d\n" ,&var);
    printf("la dirección del puntero es: %d\n" ,var_ptr);
}