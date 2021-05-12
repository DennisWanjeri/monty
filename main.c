/**
* main - main function
* @argc: first param
* @argv: 2nd param
*
* Return: int
*/

int main(int argc, char *argv[])
{
    FILE *filename = argv[1];
    char *line;

    line = parsed_line(filename);

    printf("%s\n", line);
    return 0;
}
