 if(opera == '+'){
        result= number1 + number2;
    }
    else if(opera == '-'){
        result = number1 - number2;
    }
    else if(opera == '*'){
        result = number1 * number2;
    }
    else if(opera == '/'){
        result = number1 / number2;

    }
    else if(opera == '^'){
        result = pow(number1, number2);
    }

    else{
        printf("Es is ein Fehler aufgetreten");
    }

        /*
    r = read
    w = write
    a= append
    */

    char line[255];
    FILE * filepointer = fopen("Test.txt", "r");
    fgets(line, 255, filepointer);
    printf("%s", line);


    fclose(filepointer);
