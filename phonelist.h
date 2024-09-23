int phoneList(){
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("data.txt","r");
    if(fptr == NULL){
        return -1;
    }else{
    printf("\nIsim\t\t\tSoy Isim\t\tTelefon\n");
    printf("----\t\t\t----\t\t\t-------\t\t\t\n\n");
    while(!feof(fptr)){
       fscanf(fptr,"\n%s %s %s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
       printf("%s\t\t\t",currentRecord.name);
       printf("%s\t\t\t",currentRecord.lastname);
       printf("%s\n",currentRecord.phone);

    }
    fclose(fptr);
    }


    return 0;
}